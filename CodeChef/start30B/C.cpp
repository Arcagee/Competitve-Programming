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
 
const int INF = 1e18;
const int MOD = 1000000007;
 
 
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        int m;
        ip n >> m;
        int x1, y1, x2, y2;
        ip x1 >> y1 >> x2 >> y2;
        
        bool extranum = 0;
        if(y1 % 2 != y2 % 2) extranum = 1;

        int a[n + 1][m + 1] = {0};
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(i == x1 && j == y1) a[i][j] = 1;
                if(i == x2 && j == y2) a[i][j] = 2;
            }
        }

        if(extranum) {
            // setting the adjacent elements of given points as different num
            int num = 3;
            // for x1, y1
            if(x1 - 1 >= 1) a[x1 - 1][y1] = num;
            if(x1 + 1<= n) a[x1 + 1][y1] = num;
            if(y1 - 1 >= 1) a[x1][y1 - 1] = num;
            if(y1 + 1 <= m) a[x1][y1 + 1] = num;
            // for x2, y2
            if(x2 - 1 >= 1) a[x2 - 1][y2] = num;
            if(x2 + 1<= n) a[x2 + 1][y2] = num;
            if(y2 - 1 >= 1) a[x2][y2 - 1] = num;
            if(y2 + 1 <= m) a[x2][y2 + 1] = num;
            
            a[x1][y1] = 1; a[x2][y2] = 2;

            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= m; j++) {
                    op a[i][j] << " ";
                } op endl;
            }
        }
    }
}