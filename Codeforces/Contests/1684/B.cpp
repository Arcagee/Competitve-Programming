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
        vector<int> v(3);
        int last;
        for(int i = 0; i < 3; i++) {
            ip v[i];
        }
        int a = v[0], b = v[1], c = v[2];        
        int z = c;
        int y;
        if((z * a + b) % z == b) {
            y = (z * a + b >= z) ? z * a + b : INF;
        }

        if((z * b + b) % z == b) {
            y = min(y, (z * b + b >= z) ? z * b + b : INF);
        }

        if((z * c + b) % z == b) {
            y = min(y, (z * c + b >= z) ? z * c + b : INF);
        }
        int x;
        if((y * a + a) % y == a) {
            x = (y * a + a > y) ? y * a + a : INF;
        } if((y * c + a) % y == a){
            x = min(x, (y * c + a > y) ? y * c + a : INF);
        } if((y * b + a) % y == a) {
            x = min(x, (y * b + a > y) ? y * b + a : INF);
        }
        

        cout << x << " " << y << " " << z << endl;
    }
}