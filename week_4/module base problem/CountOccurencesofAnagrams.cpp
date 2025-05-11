#include <bits/stdc++.h>
using namespace std;

int countAnagrams(string txt, string pat) {
    int n = txt.length();
    int k = pat.length();

    if (k > n) return 0;

    vector<int> freqPat(26, 0), freqWindow(26, 0);
    for (char c : pat) 
        freqPat[c - 'a']++;

    int count = 0;

    for (int i = 0; i < n; i++) {
        freqWindow[txt[i] - 'a']++;

        if (i >= k) {
            freqWindow[txt[i - k] - 'a']--;
        }

        if (freqWindow == freqPat) {
            count++;
        }
    }

    return count;
}

int main() {
    string txt = "forxxorfxdofr";
    string pat = "for";
    cout << countAnagrams(txt, pat) << endl;

    txt = "aabaabaa";
    pat = "aaba";
    cout << countAnagrams(txt, pat) << endl; 

    return 0;
}
