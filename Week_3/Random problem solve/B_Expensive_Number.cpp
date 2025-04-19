
// https://codeforces.com/contest/2093/submission/316313910
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int arr[n+5];
        for(int i=0; i<n; i++){            
            arr[i] = s[i] - '0';
        }
        int ans = -1;
        int idx = 0;
        for(int i=n-1; i>=0; i--){
            if(arr[i] > 0){
                idx = i;
            }
            if(idx > i && arr[i] == 0){
                ans = ans;
            }
            else{
                ans++;
            }     
        }
        
        cout  << ans << endl;

    }
    return 0;
}