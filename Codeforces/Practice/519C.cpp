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
    // cin >> t;
    t = 1;
    while(t--) {
        int m;
        ip n >> m;
        int ans = 0;
        while(n > 0 && m > 0) {
            if(m >= n && m != 1) {
                ans++; m-=2; n--;
            } else if(n > m && n != 1) {
                ans++; n-=2; m--;
            } else break;
        }

        op ans << endl;
    }
}