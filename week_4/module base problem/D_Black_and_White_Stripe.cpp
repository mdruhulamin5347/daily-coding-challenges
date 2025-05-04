

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<char>v(n);
        for(int i =0;i<n;i++){
            cin >> v[i];
        }
        int l = 0,r= 0;
        int ans = INT_MAX;
        int sum = 0;
        while(r<n){
            if(v[r] == 'W'){
                sum++;
            }
            if(r - l + 1 == k){
                ans = min(ans,sum);
                if(v[l] == 'W'){
                    sum--;
                }
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}