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
#define vpii vector<pair<int, int>>
#define mpii map<int, int>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define deb(x) cout << #x << " = " << x << endl
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        int k;
        ip n >> k;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        vi pref(n);
        pref[0] = a[0];
        for(int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + a[i];
        }
        int sum = 0, inc = 0;

        for(int i = n - 1; i > 0; i--) {
            if(a[i] * 100 <= k * (pref[i - 1] + inc)) continue;
            else {
                inc += ceil(((100 * a[i]) - k * (pref[i - 1] + inc)) * 1.0/k);
            }
        }
        op inc << endl;
    }
}