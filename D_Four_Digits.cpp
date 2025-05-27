

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    for(int i=s.size(); i<4.; i++){
        s.insert(0, "0");
    }
    cout << s ;
    
    return 0;
}