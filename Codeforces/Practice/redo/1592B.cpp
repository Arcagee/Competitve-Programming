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
#define MOD 1000000007
#define inf 1e18
 
 
void __print(int x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << x;}
void __print(const string &x) {cerr << x;}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
/*-------------------------------------------------------- Debugging --------------------------------------------------------*/
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
 
bool isSorted(vi a, int n) {
    for(int i = 0; i < n - 1; i++) 
        if(a[i] > a[i + 1]) return false;
    return true;
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        int k;
        ip n >> k;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        if(isSorted(a, n)) {
            op "YES\n";
            continue;
        } else {
            int l = n - k;
            int r = k - 1;
            vector<int> copy;
            copy = a;
            sort(all(copy));
            string ans = "YES";

            for(int i = l; i <= r; i++) {
                if(copy[i] != a[i]) ans = "NO";
            }

            op ans << endl;
        }
    }
}