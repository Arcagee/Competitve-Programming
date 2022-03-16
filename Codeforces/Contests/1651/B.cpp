/* Author: ankush_kr */
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
#define deb(x) cout << #x << '=' << x << endl
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int x = 1e9;
        ip n;
        vi ans;
        // op ans[0];
        while(x > 0 && n > 0) {
            ans.pb(x);
            // deb(x);
            x /= 3;
            n--;
        }

        if(n > 0) {
            op "NO" << endl;
        } else {
            op "YES" << endl;
            for(int i = 0; i < ans.size(); i++) {
                op ans[i] << " ";
            } op endl;
        }
    }
}