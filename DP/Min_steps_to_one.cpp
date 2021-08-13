#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    tsukuyomi
    int t, n;
    ip t;
    while(t--){
        ip n;
        int dp[1001] = {0};
        for(int i = 1; i <= n; i++) {
            vector<int> val(3, 10001);
            if(i % 3 == 0) {
                val[2] = i/3;
            }
            if(i % 2 == 0) {
                val[1] = i/2;
            }
            val[0] = i - 1;
            dp[i] = min({val[0], val[1], val[2]});
        }

        op dp[n] << endl;
    }
}