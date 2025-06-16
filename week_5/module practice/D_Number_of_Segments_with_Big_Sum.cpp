


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,s;
    cin >> n >> s;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l=0,r=0;
    int sum = 0;
    while(l<n){
        sum += v[r];
        if(sum >= s){
            
        }
    }
    
    return 0;
}