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
        int a, b, p;
        ip a >> b >> p;
        string s; ip s;
        n = s.size();
        char curr = s[0];
        vector<int> cost(n);
        vector<int> breaks;
        int total = 0;
        for(int i = 0; i < n; i++) {
            if(curr == s[i]) {
                cost[i] = (curr == 'A') ? a : b;
            } else {
                total += cost[i - 1];
                curr = s[i];
                cost[i] = (curr == 'A') ? a : b;
                breaks.pb(i);
            }
        }
        if(n > 1 && s[n - 1] == s[n - 2]) {
             total += cost[n - 1];
        }
        // deb(cost, total, breaks);
        if(total <= p) {
            cout << 1 << endl;
        } else {
            int ans = n;
            for(auto x : breaks) {
                total -= cost[x - 1];
                if(total == 0) break;
                if(total <= p) {
                    ans = x + 1;
                    break;
                }
            }

            cout << ans << endl;
        }
    }
}