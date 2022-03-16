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
        int a, b, m;
        ip a >> b >> n >> m;
        int maxi = max(a, b);
        int mini = min(a, b);
        string ans = "Yes";
        if(mini < m) {
            ans = "No";
        } else {
            mini -= m;
            if(maxi + mini < n) ans = "No"; 
        }

        op ans << endl;
    }
}