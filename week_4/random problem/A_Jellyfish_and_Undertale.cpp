
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 
    
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int c = b;  
        int cnt = 0;
        int i=0;
        while (n > i) {
            int mn = min(v[i],v[i+1]);
            int mx = max(v[i],v[i+1]);            
            if(mx == mn){   
                c = min(c + mx + mn, a);   
                cnt += c - 1;
                c=1;
                i++;
                i++;
            }
            else{       
                c = min(c + v[i], a);
                i++;  
                cnt += c - 1;
                c=1;
            }
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}