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
        int m, x;
        cin >> n >> m >> x;
        vi a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<pair<int, int>> st;
        for(int i = 1; i <= m; i++) {
            st.insert({0ll, i});
        }
        
        for(int i = 0; i < n; i++) {
            pair<int, int> temp = *st.begin();
            temp.first += a[i];
            a[i] = temp.second;
            st.erase(st.begin());
            st.insert(temp);
        }

        // as heights of blocks donot exceed x then we cannot get a difference greater
        // than x in a correct array
        cout << "YES" << endl;
        for(auto x : a) cout << x << " ";
        cout << endl;
    }
}