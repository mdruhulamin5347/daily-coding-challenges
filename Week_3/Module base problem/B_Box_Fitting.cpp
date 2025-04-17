
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,w;
        cin >> n >> w;
        multiset<int>ml;
        for(int i = 0;i<n;i++){
            int x;
            cin >> x;
            ml.insert(x);
        }
        int height = 1 , width = w;
        while(!ml.empty()){
            auto it = ml.upper_bound(width);
            if(it == ml.begin()){
                width = w;
                height++;
            }
            else{
                
                it--;
                int value = *it;
                width -= value;
                ml.erase(it);
            }
        }
        cout << height << endl;
    }
    
    
    return 0;
}
