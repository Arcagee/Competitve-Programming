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
 
 
/*----------------------------------- Debugging ----------------------------------- */
void __print(int x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << x;}
void __print(const string &x) {cerr << x;}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
 
const int INF = 1e18;
const int MOD = 1000000007;
 
 
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        n = 2;
        int m; ip m;
        vvi a(n, vi (m));
        for(auto &x : a) {
            for(auto &y : x) cin >> y;
        }

        int ans = 0;
        vector<vector<bool>> vis(n, vector<bool> (m));
        int cellVisited = 1;
        vi x = {1, 0, -1};
        vi y = {0, 1, 0};
        int l = 0, h = 0, right = 0;
        while(cellVisited < (2 * m)) {
            int minVal = INT_MAX, x_c = 0, y_c = 0, idx = 0;
            vis[l][h] = 1;
            for(int i = 0; i < 3; i++) {
                if(l + x[i] >= 0 && l + x[i] < 2 && h + y[i] >= 0 && h + y[i] < m) {
                    if(!vis[l + x[i]][h + y[i]]) {
                        int val;
                        if(ans < a[l + x[i]][h + y[i]]) {
                            val = (a[l + x[i]][h + y[i]] - ans + 1);
                        } else val = 1;

                        if(val < minVal) {
                            minVal = val;
                            x_c = (l + x[i]);
                            y_c = (h + y[i]);
                            idx = i;
                        }
                    }
                }
            }
            ans += minVal;
            if(idx == 1) {
                right++;
            } else right = 0;
            if(right == 2) {
                for(int i = y_c + 1; i < m; i++) {
                    if(ans < a[x_c][i]) {
                        ans += (a[x_c][i] - ans) + 1;
                    } else ans++;
                }

                x_c ^= 1;
                for(int i = m - 1; i >= 0; --i) {
                    if(vis[x_c][i]) break;
                    else if(ans < a[x_c][i]) {
                        ans += (a[x_c][i] - ans) + 1;
                    } else ans++;
                }
                break;
            }
            l = x_c; h = y_c;
            
            cellVisited++;
        }
        cout << ans << endl;
    }
}