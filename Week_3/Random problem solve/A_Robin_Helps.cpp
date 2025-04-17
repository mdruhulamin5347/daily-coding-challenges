
// https://codeforces.com/contest/2014/submission/316005954

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];            
        }
        int store = 0;
        int share = 0;
        for(int i=0; i<n; i++){
            if(v[i] >= k){
                store += v[i];
            }
            else if(v[i] == 0 && store >= 1){
                share++;
                store--;
            }
        }
        cout << share << endl;
    }
    return 0;
