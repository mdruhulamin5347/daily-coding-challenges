
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>  n;
        vector<int>v;
        for(int i=0; i<n; i++){
            int r;
            cin >> r;
            v.push_back(r);
        }
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += v[i];
        }
        if(sum <= 0){
            cout << 0 << endl;
        }
        else{
            cout << sum << endl;
        }
    }
    return 0;
}