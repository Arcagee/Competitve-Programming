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
 
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.second < b.second);
}
 

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int m;
        ip n >> m;
        vector<pair<int, int>> wt;
        unordered_map<int, int> idx;
        int sum = 0;
        for(int i = 0; i < m; i++) {
            int x, y;
            ip x >> y;
            sum += y;
            wt.pb({y, x});
            idx[x] = i + 1;    
        }
 
        sort(wt.begin(), wt.end());
        int cnt = m - 2 * n;
        for(int i = 0, j = m - 1; i < cnt; i++, j--) {
            sum -= wt[j].first;
            wt.pop_back();
        }
 
        sort(wt.begin(), wt.end(), sortbysec);

        op sum << endl;

        for(int i = 0, j = wt.size() - 1; i < n; i++, j--) {
            op idx[wt[i].second] << " " << idx[wt[j].second] << endl;
        } op endl;
    }
}