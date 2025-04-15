

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int position = 1;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ml;
    vector<int>ans;
    for(int i=1; i<=t; i++){
        int x;
        cin >> x;        
        if(x==1){
            int cost;
            cin >> cost;
            s.insert({position,cost});
            ml.insert({cost,-position});
            position++;
        }
        else if(x==2){
            int pos = s.begin()->first;
            int cost = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({cost,-pos});
        }
        else{
            int pos = -ml.rbegin()->second;
            int cost = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,cost});
        }
    }
    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}