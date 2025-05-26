// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/submission/320561033

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    long long k;
    cin >> n >> k;
    vector<long long>v(n);
    for(long long i=0; i<n; i++){
        cin >> v[i];
    }

    multiset<long long>ml;
    long long l = 0, r = 0;
    long long ans = 0;

      while(r < n){
        ml.insert(v[r]);
        while(*ml.rbegin() - *ml.begin() > k){
            ml.erase(ml.find(v[l]));
            l++;
        }
        ans += (r - l + 1);
        r++;
    }

    cout << ans << endl;
    return 0;
    
}
