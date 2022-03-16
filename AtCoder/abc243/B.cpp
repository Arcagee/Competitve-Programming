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
        vi a(n), b(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        for(int i = 0; i < n; i++) {
            ip b[i];
        }
    int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == b[i]) {
                cnt++;
                a[i] = -1;
                b[i] = -1;
            } 
        } 
        op cnt << endl;
        sort(all(a));
        sort(b.begin(), b.end());
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            if(a[i] != -1) mp[a[i]]++;
        }
        cnt = 0;
        for(int i = 0; i < n; i++) {
            if(b[i] != -1) {
                if(mp[b[i]] > 0) {
                    cnt++;
                    mp[b[i]]--;
                }
            }
        }
        op cnt << endl;
    }
}