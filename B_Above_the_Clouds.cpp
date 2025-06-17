

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        bool found = false;

        for (int i = 1; i < n - 1 && !found; i++) {
            for (int j = i + 1; j < n && !found; j++) {
                string a = s.substr(0, i);
                string b = s.substr(i, j - i);
                string c = s.substr(j);

                string ac = a + c;

                if (ac.find(b) != string::npos) {
                    found = true;
                    break;
                }
            }
        }

        cout << (found ? "Yes" : "No") << '\n';
    }

    return 0;
}