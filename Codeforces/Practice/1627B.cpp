#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int m;
        ip n >> m;
        vi ans;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                ans.pb(max(n - i, i - 1) + max(m - j, j - 1));
            }
        }

        sort(ans.begin(), ans.end());

        for(int i = 0; i < n * m; i++) {
            op ans[i] << " ";
        } op endl;
    }
}