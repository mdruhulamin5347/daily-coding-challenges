
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int q;
    
    cin >> q;
    while(q--){
        int a,b,n,s;
        cin >> a >> b >> n >> s;
        int x = min(a, s / n); 
        s -= x * n;            
        
        if (s <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}