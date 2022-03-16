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
        ip n;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        vi ans(n);

        for(int i = 1; i < n; i++) {
            for(int j = 0; j < 32; j++) {
                if(a[i - 1] & (1 << j)) {
                    if((a[i] & (1 << j)) == 0) {
                        ans[i] ^= (1 << j);
                    }
                }
            }
            a[i] ^= ans[i];
        } 

        for(int i = 0; i < n; i++) {
            op ans[i] << " ";
        } op endl;
    }
}