#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin >> a >>b >>n;
        vector<int>v(n);
        long long c = b;
        for(int i = 0;i<n;i++){  
            cin >> v[i];        
        }
        for(int i=0; i<n; i++){
            if(v[i] + 1 <= a){
                c += v[i];
            }
            else{
                c += a -1;
            }
        }
        cout << c <<endl;
    }
 
    return 0;
}