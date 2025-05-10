// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    long long ans = 0;
    long long sum = 0;
    for(int l=0,r=0; r<n; ){        
        sum += v[r];        
        if(r-l+1 == k){
            ans = max(sum, ans);
            sum -= v[l];
            l++,r++;
        }
        else{
            r++;
        }
    }
    cout << ans << endl;
    
    return 0;
}