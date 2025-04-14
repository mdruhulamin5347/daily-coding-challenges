
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i] ;
    }
    set<int>s;
    vector<int>ans;
    reverse(v.begin(),v.end());
    for(int val : v){
        s.insert(val);
        ans.push_back(s.size());
    }
    reverse(ans.begin(),ans.end());

    while(m--){
        int x;
        cin >> x;
        cout << ans[x] << endl;
    }

    return 0;
}