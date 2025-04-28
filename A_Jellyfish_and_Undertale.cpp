
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int c = b; 
        int cnt = 0;

        int i=n - 1;
        while (i>=0) {
            if (c == 1) {
                c = min(c + v[i], a);
                i--;
            }
            cnt += c - 1;
            c=1;            
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}