// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/submission/320557113


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    long long k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }


    long long sum = 0;
    long long ans = 0;
    long long l = 0, r = 0;

    while(r < n){
        sum += v[r];
        if(sum <= k){
            ans += (r - l + 1);
        }
        else{
            while(sum > k){
                sum -= v[l];
                l++;
            }
            if(sum <= k){
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    
    return 0;
}