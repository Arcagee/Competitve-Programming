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
        int a, b;
        string s;
        ip a >> b >> s;
        n = s.size();

        // we get a segment
        // now we want to check if between two segments converting
        // zeros to ones is beneficial or not
        // if it is then we do it for that segment else we dont
        // we should calculate the number of segments first and then
        // calculate the number of zeros between two segments and find the 
        // results. 
        vpii v;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                int l = i, r = i;
                while(s[i] == '1') {
                    r = i; i++;
                }
                // storing the l and r 
                v.pb({l, r}); 
                cnt++;
            }
        }
        int cost = 0;
        bool flag = 0;
        for(int i = 0; i < v.size() - 1; i++) {
            if(flag == 0)
                int cost1 = ((v[i + 1].first - v[i].second - 1) * b) + a;
            int cost2 = (i + 1) * a;
        }
        // deb(cnt, v);
    }
}