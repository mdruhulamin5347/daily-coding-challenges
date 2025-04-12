

#include <bits/stdc++.h>
using namespace std;

int main(){

    //String

    // string s;
    // for(int i=0; i<10; i++){
    //     char ch;
    //     cin >> ch;
    //     s.push_back(ch);
    // }
    // s.pop_back();
    // for(int i=0; i<s.size(); i++){
    //     cout << s[i] << " " ;
    // }
    // s.clear();
    // cout << "\n" << s.empty() << endl;


    // 2D vector 

    // vector<vector<int>> v(5,vector<int>(5,93));
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5; j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector<vector<int>> v;
    // int n,m;
    // cin >> n;
    // for(int i=0; i<n; i++){
    //     cin >> m;
    //     vector<int>a;
    //     for(int j=0; j<m; j++){
    //         int x;
    //         cin >> x;
    //         a.push_back(x);
    //     }
        
    //     v.push_back(a);
    // }

    // for(int i=0; i<v.size(); i++){
    //     for(int j=0; j<v[i].size(); j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    vector<string> str;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        str.push_back(s);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<str[i].size(); j++){
            cout << str[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}