

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    pair<string,int>p = {"ruhul",10};
    cout << p.first << " " << p.second << endl;
    auto [name,roll] = p;
    cout << name << " " << roll << endl;

    int n;
    cin >> n;
    pair<string,int> vp[n];
    for(int i=0; i<n; i++){
        cin >> vp[i].first >> vp[i].second;
    }
    for(auto [name,roll] : vp){
        cout << name << " " << roll << endl;
    }

    pair<string,pair<int,int>> pp = {"ruhul amin",{50,1863}};
    cout << pp.first << " " << pp.second.first << " " << pp.second.second << endl;



    tuple<string,int,int> t[2];
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> get<0>(t[i]) >> get<1>(t[i]) >> get<2>(t[i]);
    }

    for(auto [name,roll,number] : t){
        cout << name << " " << roll << " " << number << endl;
    }



    return 0;
}