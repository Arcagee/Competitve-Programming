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
Consider an n×n grid whose squares may have traps. It is not allowed to move to a square with a trap.

Your task is to calculate the number of paths from the upper-left square to the lower-right square. 
You can only move right or down.
*/
 
signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {
        ip n;
        vector<vector<int>> v(n + 1, vi (n + 1));

        for(int i = 1; i <= n; i++) {
        	for(int j = 1; j <= n; j++) {
        		char x; ip x;
        		if(x == '.') v[i][j] = 0;
        		else v[i][j] = 1;
        	}
        }
        
        vvi dp(n + 1, vi (n + 1));

        for(int i = n; i >= 1; --i) {
            for(int j = n; j >= 1; --j) {
                // Base Case
                if(i == n && j == n) dp[i][j] = 1;
                else {
                    int op1 = (j + 1 > n) ? 0 : dp[i][j + 1];
                    int op2 = (i + 1 > n) ? 0 : dp[i + 1][j];
                    dp[i][j] = (op1 + op2) % MOD;
                    if(v[i][j] == 1) dp[i][j] = 0;
                }
            }
        }
        if(v[n][n] == 1) dp[1][1] = 0;
        op dp[1][1] << endl;
        // deb(v);
    }
}