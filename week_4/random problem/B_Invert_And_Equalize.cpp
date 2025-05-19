
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int group_cnt_0 = 0, group_cnt_1 = 0;
        bool flag_0 = false, flag_1 = false;

        for(int i = n-1; i >= 0; i--){        
            if(s[i] == '0' && flag_0 == false){
                group_cnt_0++;
                flag_0 = true;
                flag_1 = false;
            }

            else if(s[i] == '1' && flag_1 == false){
                group_cnt_1++;
                flag_0 = false;
                flag_1 = true;
            }            
        }
        
        if(s[n-1] == '0')
            cout << group_cnt_1 << endl;
        else
            cout << group_cnt_0 << endl;
    }

    return 0;
}