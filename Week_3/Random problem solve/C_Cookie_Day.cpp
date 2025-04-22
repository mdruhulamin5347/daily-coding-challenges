
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>v;
        for(int i=0; i<n; i++){
            int r;
            cin >> r;
            v.push_back(r);
        }
        int waste = INT_MAX;
     
        for(int i=0; i<n; i++){
            if(v[i] >= k){
                waste = min(waste,v[i] % k);
            
            }
        }
        if(waste != INT_MAX){
            cout << waste << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}