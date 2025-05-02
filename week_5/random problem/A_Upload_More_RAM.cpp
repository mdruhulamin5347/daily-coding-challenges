

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;
        int min_second = 1;
        if(n > 1){
            min_second = (n - 1) * k;
            min_second++;
        }
        cout << min_second << endl;
    }
    
    return 0;
}