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
    // t = 1;
    while(t--) {
        int k;
        ip n >> k;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        sort(a.rbegin(), a.rend());
        int ans = 0;
        for(int i = 0; i < k; i++) {
            ans += (a[i + k]/a[i]);
            a[i] = 0; a[i + k] = 0;
        }

        for(int i = 0; i < n; i++) {
            ans += a[i];
        }

        op ans << endl;
    }
}