

#include <bits/stdc++.h>
using namespace std;

map<long long,long long>dp;

long long recur(long long n){
        if(n <= 3) return 1;
        if(dp.find(n) != dp.end()) return dp[n];
        return dp[n] = recur(n/4) * 2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << recur(n) << endl;
    }
    return 0;
}