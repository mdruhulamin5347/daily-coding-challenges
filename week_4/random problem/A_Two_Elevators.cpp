// https://codeforces.com/contest/1729/submission/317497224

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int second_lift = abs(abs(b-c) + c) -1 ;
        int first_lift = abs(a-1);


        if(first_lift==second_lift){
            cout << '3' << endl;
        }        
        else if(first_lift > second_lift){
            cout << '2' << endl;
        }
        else{
            cout << '1' << endl;
        }
        
    }
    return 0;
}