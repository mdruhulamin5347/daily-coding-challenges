

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    set<int> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    for(auto v : s){
        cout << v << " " ;
    }

    auto it = s.begin();
    // it++;
    cout <<  endl << *it << endl;

    auto ite = s.find(5);
    if(ite==s.end()){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    // s.erase(6);
    auto iter = s.find(6);
    if(iter==s.end()){
        cout << "Not Found" << endl;
    }
    else{
        s.erase(iter);
    }
    for(auto val : s){
        cout <<  val << " ";
    }

    auto itera = s.upper_bound(5); // lower_bound()
    cout << endl << *itera << endl;


    // multiset

    multiset<int> ms;
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int y;
        cin >> y;
        ms.insert(y);
    }
    for(auto val : ms){
        cout << val << " ";
    }

    // all function same for multiset
    
    return 0;
}