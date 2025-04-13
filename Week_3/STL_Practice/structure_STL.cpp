
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,set<int>>mp;

    set<int> s1;
    s1.insert(3);
    s1.insert(6);
    s1.insert(9);

    set<int> s2;
    s2.insert(5);
    s2.insert(6);
    s2.insert(8);

    mp[5] = s1;
    mp[3] = s2;

    for(auto [key,set_val] : mp){
        cout << key << " -> ";
        for(auto val : set_val){
            cout << val << " ";
        } 
        cout << endl;
    }

    // use upper_bound() in this structurd
    return 0;
}