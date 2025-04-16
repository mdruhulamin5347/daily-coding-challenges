

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int m;
        cin >> m;
        for(int i=0; i<m; i++){
            string s;
            cin >> s;

            map<int, char> num_char;
            map<char, int> char_num;
            bool flag = true;

            for(int j = 0; j < n; j++){
                int num = v[j];
                char ch = s[j];

                if(v.size() != s.size()){
                    flag = false;
                    break;
                }

                else if(num_char.find(num) != num_char.end()){
                    if(num_char[num] != ch){
                        flag = false;
                        break;
                    }
                } else {
                    num_char[num] = ch;
                }

                if(char_num.find(ch) != char_num.end()){
                    if(char_num[ch] != num){
                        flag = false;
                        break;
                    }
                } else {
                    char_num[ch] = num;
                }
            }

            if(flag) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    return 0;
}