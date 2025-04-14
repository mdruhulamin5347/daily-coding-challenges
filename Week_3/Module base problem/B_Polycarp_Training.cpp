
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    multiset<int>ml;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        ml.insert(x);
    }
    
    int ans = 0, days = 1;
    while(!ml.empty()){
        auto it = ml.lower_bound(days);
        if(it != ml.end()){
            ans++;
            ml.erase(it);
        }
        else{
            break;
        }
        days++;
    }

    cout << ans << endl;

    return 0;
}