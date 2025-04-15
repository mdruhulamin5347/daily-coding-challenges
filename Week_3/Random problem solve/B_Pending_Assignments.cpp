

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        long long day_to_min = (z * 24) * 60;
        long long ass_com_min = x * y;

        if(ass_com_min <= day_to_min)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;        
    }
    return 0;
}