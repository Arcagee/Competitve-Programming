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
const int N = 1000;
int dp[N + 1][N + 1];

int knapsackRec(vi wt, vi val, int W, int n) {
	if(n == 0 || W == 0)
		return 0;

	if(dp[n][W] != -1) {
		return dp[n][W];
	}

	if(wt[n - 1] <= W) {
		return dp[n][W] = max(val[n - 1] + knapsackRec(wt, val, W - wt[n - 1], n - 1), knapsackRec(wt, val, W, n - 1));
	} else {
		return knapsackRec(wt, val, W, n - 1);
	}
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {
		memset(dp, -1, sizeof(dp));
        int W; // capacity of knapsack
        ip n >> W; 
        vi val(n), wt(n);
        for(int i = 0; i < n; i++) {
        	ip wt[i];
        }

        for(int i = 0; i < n; i++) {
        	ip val[i];
        }

        op knapsackRec(wt, val, W, n);
    }
}