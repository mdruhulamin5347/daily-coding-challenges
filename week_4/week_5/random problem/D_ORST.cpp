
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        int x = 0;
        for(int i=0; i<m; i++){
            x = max(x,b[i]);            
        }
        int y = n - x;
        sort(a.begin() + y,a.end());
        for(int val : a){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}