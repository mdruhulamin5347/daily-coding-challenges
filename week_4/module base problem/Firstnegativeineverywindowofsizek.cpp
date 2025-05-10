

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> ans;
    int l = 0, r = 0;
    queue<int>q;

    while(r < n){
        if(v[r] < 0){
            q.push(v[r]);
        }        

        if(r-l+1 == k){
            if(!q.empty()){
                ans.push_back(q.front());
                if(q.front() == v[l]){
                    q.pop();
                }
            }
            else{
                ans.push_back(0);
            }
            l++;            
        }
        r++;
    }

    for(int i=0; i<ans.size() - 1; i++){
        cout << ans[i] << ", ";
    }
    cout << ans[ans.size() - 1] << endl;
    return 0;
}