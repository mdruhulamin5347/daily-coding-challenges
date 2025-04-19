// https://codeforces.com/contest/1996/submission/316307252
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t; 
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n+5][n+5];
        for(int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            for(int j = 0; j < n; ++j) {
                arr[i][j] = s[j] - '0';
            }
        }

        int newSize = n / k;
        int newArr[newSize+5][newSize+5];

        for(int i=0,r=0; i<newSize; i++,r+=k){
            for(int j=0,s=0; j<newSize; j++,s+=k){
                newArr[i][j] = arr[r][s];
            }           
        }


        for(int i=0; i<newSize; i++){
            for(int j=0; j<newSize; j++){
                cout << newArr[i][j];
            }
            cout << endl;
        }
      

    }
    return 0;
}