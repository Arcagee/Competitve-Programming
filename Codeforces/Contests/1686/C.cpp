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
        ip n;
        vi a(n);
        mpii mp;
        string ans = "YES";
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        
        sort(all(a));
        vi temp1, temp2;
        int lim = n/2;
        vi res(n);
        for(int i = 0; i < lim; i++) {
            temp1.pb(a[i]);
        }

        for(int i = n - 1; i >= lim; i--) {
            temp2.pb(a[i]);
        }
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) { res[i] = temp1.back(); temp1.pop_back(); }
            else { res[i] = temp2.back(); temp2.pop_back(); }
        }
        int ok = 1;
        for(int i = 0; i < n; i++){
            if(i == 0){
                if(res[i] >= res[i+1] && res[i] <= res[n-1]) ok = 0;
                else if(res[i] <= res[i+1] && res[i] >= res[n-1]) ok = 0;
            }
            else if(i == n -1){
                 if(res[i] >= res[0] && res[i] <= res[i-1]) ok = 0;
                else if(res[i] <= res[0] && res[i] >= res[i-1]) ok = 0;
            }
            
            else {
                if(res[i] >= res[i+1] && res[i] <= res[i-1]) ok = 0;
                else if(res[i] <= res[i+1] && res[i] >= res[i-1]) ok = 0;
            }
        }
        
        if(ok) {
            op "YES" << endl;
            for(int i = 0; i < n; i++) {
                op res[i] << " ";
            } op endl;
        } else op "NO" << endl;
    }
}