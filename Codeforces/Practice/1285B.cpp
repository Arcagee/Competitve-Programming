#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        int sum = 0;
        for(auto &x: a) {
            ip x;
            sum += x; 
        }
        
        if(sum <= 0) {
            op "NO" << endl;
            continue;
        } else {
            int cur = 0;
            int maxsum = INT64_MIN;
            bool flag = 0;
            for(int i = 0; i < n - 1; i++) {
                cur += a[i];
                if(cur > maxsum) {
                    maxsum = cur;
                }
                if(cur < 0) {
                    cur = 0;
                }
            }
            
            int cur1 = 0;
            for(int i = 1; i < n; i++) {
                cur1 += a[i];
                if(cur1 > maxsum) {
                    maxsum = cur1;
                }
                if(cur1 < 0) {
                    cur1 = 0;
                }
            }

            if(sum > maxsum) {
                op "YES" << endl;
            } else {
                op "NO" << endl;
            }
        }
    }
}
