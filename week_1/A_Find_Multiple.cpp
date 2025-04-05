#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int mul = c * ((a + c - 1) / c);
    if(a <= mul && mul <= b)
        cout << mul << endl;
    else 
        cout << -1 << endl;
    return 0;
}