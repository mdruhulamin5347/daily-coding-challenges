
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int h,x,y;
        int cnt = 0;
        cin >> h >> x >> y;
        if(x < y){
            h -= y;
            cnt++;
            while(h > 0){
                h -= x;
                cnt++;
            }
        }
        else{
            while(h > 0){
                h -= x;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}