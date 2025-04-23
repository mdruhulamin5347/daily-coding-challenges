

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        bool isTrue = true;
        int totalSub = 0;
        for(int i = 0;i<n;i++){
            if(isTrue && a[i] < 0){
                totalSub++;
                isTrue = false;
            }
            if(a[i] < 0)
                a[i] = a[i] * -1;
            
           else if(a[i] > 0 && !isTrue)
                isTrue = true;
            
           
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
           sum += a[i];
        }
        cout << sum << " " << totalSub << endl;
    }

    return 0;
}