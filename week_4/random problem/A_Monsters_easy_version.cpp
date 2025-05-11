// https://codeforces.com/contest/1784/submission/319301265

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int>health;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            health.push_back(x);
        }

        sort(health.begin(),health.end());

        long long ans = 0;
        ans += health[0] - 1;

        vector<int>health_less(n);
        health_less[0] = health[0];
        
        int k = 2;
        for(int i=1; i<n; i++){
            if(health[i] < k){
                health_less[i] = health[i];
            }
            else{
                health_less[i] = k;
                k++;
            }
        }

        for(int i=0; i<n; i++){
            ans += abs(health[i]-health_less[i]);
        }

        cout << ans << endl;        
    }
    
    return 0;
}