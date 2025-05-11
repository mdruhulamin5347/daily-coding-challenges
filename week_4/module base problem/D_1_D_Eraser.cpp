// https://codeforces.com/contest/1873/submission/319128657

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;
        int i = 0;

        while(i < n){
            if(s[i] == 'B'){
                ans++;
                i += k;  
            } else {
                i++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
