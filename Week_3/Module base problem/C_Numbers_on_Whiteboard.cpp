// https://codeforces.com/contest/1430/submission/316567896
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        int ans = n;
        for(int i=n-1; i>0; i--){
            v.push_back({ans,i});
            ans = ceil((ans + i) / 2.0);
        }
        cout << ans << endl;
        for(auto [a,b] : v){
            cout << a << " "  << b << endl;
        }
      
    }
    return 0;
}