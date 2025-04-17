// https://codeforces.com/contest/2003/submission/316012984

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char ch[n+5];
        for(int i=0; i<n; i++){
            cin >> ch[i];
        }
        if(ch[0] == ch[n-1]){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}