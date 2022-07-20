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
 
bool isPal(string s) {
    string k = s;
    reverse(all(k));
    return k == s;
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        ip n; 
        string s;
        ip s;
        int ans = INT_MAX;
        if(isPal(s)) {
            op 0 << endl;
            continue;
        } else {
            map<char, vector<int>> mp;
            for(int i = 0; i < n; i++) {
                mp[s[i]].pb(i);
            }

            for(auto x : mp) {
                
            }
            // for(char del = 'a'; del <= 'z'; del++) {
            //     int cnt = 0; string k;
            //     for(int i = 0; i < n; i++) {
            //         if(s[i] != del) k += s[i];
            //     }

            //     cnt = n - k.size();
            //     if(cnt > 0 && isPal(k)) {
            //         ans = min(cnt, ans);
            //     }
            // }
            
            op ans << endl;
        }
    }
}