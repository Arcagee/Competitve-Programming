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
 
int dp[1001][1001];

int longestCommonSubsequence(string a, string b) {
	// int dp[a.size()][b.size()];
	vvi dp(a.size(), vi (b.size()));
	// for (int i = 0; i < a.size(); i++) {
	// 	fill(dp[i], dp[i] + b.size(), 0);
	// }
	for (int i = 0; i < a.size(); i++) {
		if(a[i] == b[0]) dp[i][0] = 1;
		if(i != 0) dp[i][0] = max(dp[i][0], dp[i - 1][0]);
	}
	for (int i = 0; i < b.size(); i++) {
		if(a[0] == b[i]) dp[0][i] = 1;
		if(i != 0) dp[0][i] = max(dp[0][i], dp[0][i - 1]);
	}

	deb(dp);
	for (int i = 1; i < a.size(); i++) {
		for (int j = 1; j < b.size(); j++) {
			if(a[i] == b[j]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[a.size() - 1][b.size() - 1];
}

int lcs(string a, string b) {
	int n = a.size(), m = b.size();

	vvi dp(n + 1, vi (m + 1));
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(a[i - 1] == b[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	// deb(dp);
	return dp[n][m];
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {
        string a, b;
        ip a >> b;
        op longestCommonSubsequence(a, b);
    }
}