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
#define deb(x) cout << #x << " x " << x << endl
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {
        ip n;
        vpii a;
        for(int i = 0; i < n; i++) {
            int x, y;
            ip x >> y;
            a.pb({x, y});
        }
        string s; ip s;

        map<int, pair<int, int>> mp;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'L') {
                mp[a[i].second].first = max(mp[a[i].second].first, a[i].first);
                mp[a[i].second].second++;
            }
        }

        string ans = "No";
        for(int i = 0; i < n; i++) {
            if(s[i] == 'R') {
                if(mp[a[i].second].second > 0 && mp[a[i].second].first > a[i].first) {
                    ans = "Yes";
                }
            }
        }

        op ans << endl;
    }
}