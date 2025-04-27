// https://codeforces.com/contest/1729/submission/317501995
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        vector<int>v;
        cin >> s;
        for(int i=n-1; i>=0; i--){
            
            if((s[i] - '0') != 0){
                v.push_back(s[i] - '0');
   
            }
            else{
                v.push_back((s[i-2] - '0') * 10 + (s[i-1] - '0'));
                i--;
                i--;
            }
        }
        reverse(v.begin(),v.end());

        for(int val : v){
            char ch = 'a' + (val - 1);
            cout <<  ch ;
        }
        cout << endl;

    }
    return 0;
}