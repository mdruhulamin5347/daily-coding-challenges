
// https://codeforces.com/contest/1992/submission/316069636

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        priority_queue<int,vector<int>,greater<int>> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int mx = 0;
        int run_time = 5;
        while(run_time){
            int x = pq.top();
            pq.pop();
            mx = max(mx,x);
            if(x <= mx){
                x++;
                run_time--;
            }            
            pq.push(x);
        }
        long long sum = 1;
        while(!pq.empty()){
            sum *= pq.top();
            pq.pop();
        }
        cout << sum << endl;
    }
    return 0;
}