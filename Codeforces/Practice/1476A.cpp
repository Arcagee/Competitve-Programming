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
        int k;
        ip n >> k;
        if(n > k) {
            k = k * ceil((double) n / k);
        }

        int var = k/n;
        int ele = k - n * var;
        int ans = var;
        if(ele <= n && ele > 0) {
            ans = var + 1;
        }

        op ans << endl;
    }
}