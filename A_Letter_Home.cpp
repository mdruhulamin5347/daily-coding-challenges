

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        int min_x = x[0];
        int max_x = x[n - 1];

        int steps1 = abs(s - min_x) + (max_x - min_x);
        int steps2 = abs(s - max_x) + (max_x - min_x);

        cout << min(steps1, steps2) << endl;
    }

    return 0;
}