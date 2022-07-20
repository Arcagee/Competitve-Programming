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
    // cin >> t;
    while(t--) {
        int q;
        ip n >> q;
        vi a(n);
        vi pref(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        pref[0] = a[0];
        for(int i = 1; i < n; i++) {
            pref[i] = a[i] ^ pref[i - 1];
        }

        deb(pref);
        while(q--) {
            int l, r;
            ip l >> r;
            l--; r--;
            int val1 = 0, val2 = 0;
            if(l - 1 >= 0) {
                val1 = pref[l - 1] ^ 0;
            }

            if(r != n - 1) {
                val2 = pref[r] ^ pref[n - 1];
            }
            op (val1 ^ val2) << endl;
        }
    }
}