
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        map<int,set<int>>mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            mp[x].insert(i);
        }


        for(int i=0; i<m; i++){
            int l,r;
            cin >> l >> r;
            if(mp.find(l)== mp.end() || mp.find(r) == mp.end()){
                cout << "NO" << endl;
            }
            else{
                auto mnLeft = *mp[l].begin();
                auto mxRight = *mp[r].rbegin();
                if(mnLeft < mxRight){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
        
    }
    
    return 0;
}