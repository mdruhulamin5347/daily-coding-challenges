// https://codeforces.com/contest/1840/submission/319209833
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,k,q;
        cin >> n >> k >> q;
        vector<int>temp(n);
        for(int i=0; i<n; i++){
            cin >> temp[i];
        }

        long long ans = 0;
        long long length = 0;

        for(int i=0; i<n; i++){
            if(temp[i] <= q){
                length++;
                if((i == (n - 1)) || temp[i+1] > q){
                    if(length >= k){
                        long long x = length - k + 1;
                        long long sum = (x*(x+1))/2;
                        ans += sum;
                    }
                    length = 0;
                } 
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}