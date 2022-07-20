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
 
void leftShift(vector<int>& vec, int start, int end)
{
    int num = vec[start];
    for(int i = start; i < end; i++) {
        vec[i] = vec[i + 1];
    }
    vec[end] = num;
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        ip n;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        vector<int> v; v = a;
        sort(all(v));
        int ov = 0;
        vector<vector<int>> ans;
        for(int i = n - 1; i >= 0; --i) {
            if(a[i] != v[i]) {
                int ptr = i, ptr2 = i;
                while(a[ptr] != v[i]) ptr--;
                int cnt = 0;
                while(a[i] != v[i]) {
                    leftShift(a, ptr, ptr2);
                    deb(a);

                    cnt++; ov++;
                }
                ans.pb({ptr + 1, ptr2 + 1, cnt});
            }
        }

        cout << ov << endl;
        for(auto x : ans) {
            for(auto y : x) {
                cout << y << " ";
            } cout << endl;
        }
    }
}