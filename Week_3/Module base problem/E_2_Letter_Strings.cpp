#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        map<char,int> fFreq;
        map<char,int> sFreq;
        map<string, int> fullFreq;

        long long totalPair = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            totalPair += fFreq[s[0]];
            totalPair += sFreq[s[1]];
            totalPair -= 2 * fullFreq[s];
            fFreq[s[0]]++;
            sFreq[s[1]]++;
            fullFreq[s]++;
        }
        cout << totalPair << endl;
    }
    return 0;
}