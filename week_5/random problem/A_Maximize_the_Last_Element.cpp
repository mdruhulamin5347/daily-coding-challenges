// https://vjudge.net/solution/60452533

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            if(i % 2 == 0){
                int x;
                cin >> x;
                mx = max(mx,x);
            }
            else{
                int x;
                cin >> x;
            }
        }
        cout << mx << endl;
    }
    return 0;
}