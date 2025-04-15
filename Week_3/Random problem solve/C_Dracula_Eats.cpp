
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int days;
        cin >> days;
        if(days <= 1){
            cout << 0 << endl;            
        }
        else{
            int ans = ((days - 2) / 7) + 1;
            cout << ans << endl;
        }      
    }
    return 0;
}