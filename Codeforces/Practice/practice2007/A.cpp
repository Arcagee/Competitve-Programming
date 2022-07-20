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
 
int countNeighbors(int i, int j, int m, int n) {
    int cnt = 4;
    if(i == 0) cnt--;
    if(j == 0) cnt--;
    if(i == (m - 1)) cnt--;
    if(j == (n - 1)) cnt--;

    return cnt;
}
 

bool isCorner(int i, int j, int m, int n) {
    return (i == 0 && j == 0) || 
           (i == (m - 1) && j == 0) || 
           (i == 0 && j == (n - 1)) ||
           (i == m - 1 && j == n - 1);
}

bool isSide(int i, int j, int m, int n) {
    return (i == 0) || (j == 0) || (i == m - 1) || (j == n - 1);
}
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        int m; ip m >> n;
        vvi a(m, vi (n));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ip a[i][j];
            }
        }

        string ans = "YES";
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(a[i][j] > 4) {
                    ans = "NO";
                    break;
                }

                int neighbors = countNeighbors(i, j, m, n);

                if(neighbors < a[i][j]) { ans = "NO"; break; }
            }
            if(ans == "NO") break;
        }

        op ans << endl;
        if(ans == "YES") {
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    if(isCorner(i, j, m, n)) cout << 2 << " "; 
                    else if(isSide(i, j, m, n)) cout << 3 << " ";
                    else cout << 4 << " ";
                } cout << endl;
            }
        }
    }
}