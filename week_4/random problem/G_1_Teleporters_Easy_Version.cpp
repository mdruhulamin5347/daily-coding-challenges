// https://codeforces.com/contest/1791/submission/319420561


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n,c;
        cin >> n >> c;
        vector<int> cost(n);
        for(int i=0; i<n; i++){
            cin >> cost[i];
            cost[i] += i+1;
        }

        sort(cost.begin(), cost.end());

        long long ans = 0;
        long long sum = 0;

        for(int i=0; i<n; i++){
            if(sum + cost[i] > c)
                break;
            sum += cost[i];
            ans++;
        }

        cout << ans << endl;
    }
    
    return 0;
}