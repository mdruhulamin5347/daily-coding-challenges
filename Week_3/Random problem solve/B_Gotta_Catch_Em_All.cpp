

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        vector<int>v;
        for(int i=0; i<n; i++){
            int r;
            cin >> r;
            v.push_back(r);
        }
        vector<long long> v2(n);
        for(int i=0; i<n; i++){
            if((v[i] * x) > y)
                v2[i] = y;
            else
                v2[i] = v[i] * x; 
        }
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += v2[i];
        }

        cout << sum << endl;

    }
    return 0;
}