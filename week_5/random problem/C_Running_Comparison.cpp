
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            int x = min(a[i],b[i]);
            int y = max(a[i],b[i]);

            if(y / (x + 1) <= 1){
                cnt++;
            }
            // cout << y / (x + 1) << " ";
        }
        
        cout << cnt << endl;
    }
    return 0;
}