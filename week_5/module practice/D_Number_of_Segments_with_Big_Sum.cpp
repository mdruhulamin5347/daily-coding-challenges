

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int l = 0;
    long long sum = 0;
    long long count = 0;

    for (int r = 0; r < n; r++) {
        sum += v[r];
        while (sum >= s) {
            count += (n - r);
            sum -= v[l];
            l++;
        }
    }

    cout << count;
    
    return 0;
}
