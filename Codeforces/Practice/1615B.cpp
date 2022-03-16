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
    int N = (int) 2e5 + 1;
    // int pref[N + 1][21] = {0};
    vvi pref(N + 1, vi (20));
    for(int i = 0; i < 20; i++) {
        for(int j = 1; j <= N; j++) {
            pref[j][i] = pref[j - 1][i] + ((j & (1 << i)) ? 1 : 0);
        }
    }
    cin >> t;
    while(t--) {
        int l, r;
        ip l >> r;
        int ans = 0;
        for(int i = 0; i < 20; i++) {
            ans = max(pref[r][i] - pref[l - 1][i], ans);
        }

        op (r - l + 1) - ans << endl;
    }
}