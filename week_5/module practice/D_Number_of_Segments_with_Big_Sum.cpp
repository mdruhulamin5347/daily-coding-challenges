


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
    int count = 0;
    while(l<n){
        sum += v[r];
        while(sum >= s){
            count+= (n-r);
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout << count;
    
    return 0;
}