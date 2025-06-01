

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    
    for(int i=0; i<8; i++){
        cout << (a >> (7-i) & 1) << " ";
    }

    return 0;
}