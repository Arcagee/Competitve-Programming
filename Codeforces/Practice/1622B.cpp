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
        ip n;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        string s; ip s;
        vector<pair<int, int>> vl, vs;
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                vl.pb({a[i], i});
            } else {
                vs.pb({a[i], i});
            }
        }

        sort(vl.rbegin(), vl.rend());
        sort(vs.begin(), vs.end());

        int val = n;
        for(auto x : vl) {
            a[x.second] = val;
            val--;
        }
        
        for(int i = 1, j = 0; i <= val; i++, j++) {
            a[vs[j].second] = i;
        }

        for(int i = 0; i < n; i++) {
            op a[i] << " ";
        } op endl;
    }
}