
// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/submission/319104887

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    for(int i=0; i<m; i++){
        cin >> v2[i];
    }

    int l=0,r=0,cnt = 0;
    while(r<m){
        if(l < n && v1[l] < v2[r]){
            cnt++,l++;      
        }
        else{
            cout << cnt << " ";
            r++;            
        }      
    }
    
    return 0;
}