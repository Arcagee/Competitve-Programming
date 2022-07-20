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
 
int binarySearch(vi &a, int target) {
    int low = 0, high = a.size() - 1, ans = a.size();

    while(low <= high) {
        int mid = low + (high - low)/2;
        if(a[mid] > target) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }
    
    return ans;
}

signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {    
        int m;
        ip n >> m;
        vi a(n), b(m);

        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        for(int i = 0; i < m; i++) {
            ip b[i];
        }
        
        sort(all(a)); 
        vi ans;
        for(int i = 0; i < m; i++) {
            // int idx = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            // if(idx == n - 1) idx++;
            op (binarySearch(a, b[i])) << " ";
        } op endl;
    }
}