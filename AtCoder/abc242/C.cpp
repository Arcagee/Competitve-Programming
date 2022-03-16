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
    int mod = 998244353;
    // cin >> t;
    t = 1;
    while(t--) {
        ip n;
        int i = 1, x = 10;
        for(int j = 0; j < n - 1; j++) {
            i += x;
            x *= 10;
        }

        op i << endl;
    }
}