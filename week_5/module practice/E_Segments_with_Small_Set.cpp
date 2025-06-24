

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> freq;
    long long count = 0;
    int l = 0;

    for(int r = 0; r < n; r++){
        freq[v[r]]++;

        while(freq.size() > k){
            freq[v[l]]--;
            if(freq[v[l]] == 0){
                freq.erase(v[l]);
            }
            l++;
        }

        count += (r - l + 1);
    }

    cout << count << endl;
    return 0;
}
