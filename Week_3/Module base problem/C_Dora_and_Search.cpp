#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        int l = 0, r = n - 1;
        int mn = 1, mx = n;
        bool fnd = false;
        while (r - l + 1 >= 3) {
            if (v[l] == mn || v[l] == mx) {
                if (v[l] == mn) {
                    mn++;
                }
                if (v[l] == mx){
                    mx--;
                }
                l++;
            } else if (v[r] == mn || v[r] == mx) {
                if (v[r] == mn){
                    mn++;
                }
                if (v[r] == mx){
                    mx--;
                }
                r--;
            } else {
                cout << l + 1 << ' ' << r + 1 << endl;
                fnd = true;
                break;
            }
        }

        if (!fnd){
            cout << -1 << endl;
        }
    }

    return 0;
}