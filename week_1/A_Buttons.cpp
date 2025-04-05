
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int mx;
    cin >> a >> b;
    if(a==b){
        cout << a + b << endl;
        return 0;
    }
    else
        mx = max(a,b);

    cout << mx + (mx-1);
    return 0;
}