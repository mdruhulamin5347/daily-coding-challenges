// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/submission/319129188

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;

    vector<int>v;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(int val : v){
        cout << val << " ";
    }
    return 0;
}