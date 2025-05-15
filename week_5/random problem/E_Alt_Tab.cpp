
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string>s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    set<string> st;
    vector<string>ans;
    for(int i=n -1,j=0; i>=0; i--){
        if(st.count(s[i]) == 0){
            st.insert(s[i]);
            string str = s[i].substr(s[i].length() - 2);
            ans.push_back(str);
        }        
    }

    for(string val : ans){
        cout << val;
    }

    return 0;
}