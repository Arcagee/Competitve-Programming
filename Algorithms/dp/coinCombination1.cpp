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
 
/* 
Problem Statement:
Consider a money system consisting of n coins. Each coin has a positive integer value. 
Your task is to calculate the number of distinct ways you can produce a money sum x using the available coins.
*/

signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {
        int x; // Required Sum
        ip n >> x;
        vi coins(n);
        vi dp(x + 1); // DP array to store the number of ways for each sum (0 -> x)


        for(int i = 0; i < n; i++) {
        	ip coins[i];
        }

        // Base Case
        dp[0] = 1; // Number of ways to make sum zero can be that we donot choose any coin and that
        		   // is one way to make the sum 0

        for(int sum = 1; sum <= x; sum++) {
        	for(int i = 0; i < n; i++) {
        		if(coins[i] <= sum)
        			dp[sum] = (dp[sum] + dp[sum - coins[i]]) % MOD;
        	}
        }

        op dp[x] << endl;
    }
}