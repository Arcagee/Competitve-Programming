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
        int m;
        cin >> n >> m;
        vi a(m);

        for(int i = 0; i < m; i++) {
            ip a[i];
        }
        sort(all(a));
        vi diff;
        diff.pb(n + a[0] - a[m - 1] - 1);
        for(int i = 0; i < m - 1; i++) {
            diff.pb((a[i + 1] - a[i] - 1));
        }        
        sort(all(diff));
        int foo = 0, sub = 0;
        for(int i = diff.size() - 1; i >= 0; --i) {
            diff[i] -= sub;
            if(diff[i] <= 0) continue;
            if(diff[i] == 1 || diff[i] == 2) {
                sub += 2;
                foo += 1;
            } else {
                foo += diff[i] - 1;
                sub += 4;
            }
        }
        cout << n - foo << endl;
        // while(!diff.empty()) {
        //     int ele = diff.back();
        //     if(ele >= 1) {
        //         for(int i = 0; i < diff.size() - 1; i++) {
        //             ans += min(4ll, diff[i]);
        //             if(diff[i] < 4) diff[i] = 0;
        //             else diff[i] -= 4;
        //         }
        //         if(ele > 1)
        //             ans++;
        //     } 
        //     diff.pop_back();
        // }

    }
}
