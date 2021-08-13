#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
vector<int> dp(1001, 0);
int min_steps(int n, vector<int> dp) {
    if(n == 1) {
        return dp[n] = 0;
    }
    
    if(dp[n] > 0) {
        return dp[n];
    }
    vector<int> val(4, 10001);

    if(n % 2 == 0) {
        val[2] = min_steps(n/2, dp);
    }

    if(n % 3 == 0) {
        val[3] = min_steps(n/3, dp);
    }

    val[1] = min_steps(n - 1, dp);

    int ans = min({val[1], val[2], val[3]}) + 1;

    return dp[n] = ans;
}

signed main(){
    tsukuyomi
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        int ans = min_steps(n, dp);
        op ans << endl;
    }
}