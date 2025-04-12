

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>mp;
    mp[10]=20;
    mp[5]=15;
    mp[13]=26;
    mp[1]=65;
    mp[7]=30;
    mp[15]=44;

    // cout << mp[10] << " ";

    auto it = mp.find(4);
    if(it==mp.end())
        cout << "not included this key in map";
    else
        cout << it->first << " " <<  it->second << " ";

    

    cout << endl;
    
    auto ite = mp.find(1);
    if(ite==mp.end())
        cout << ite->first << " " << ite->second;
    else
        mp.erase(it->first);    
    cout << "\n" << ite->first << " " << ite->second << endl;


    auto iter = mp.begin();
    cout << iter->second << endl;


    auto itera = mp.lower_bound(11); // upper_bound
    cout << itera->second << endl;
    return 0;
}