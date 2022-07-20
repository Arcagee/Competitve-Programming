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
You are given an array of integers nums and an integer target.

Return the number of non-empty subsequences of nums such that the 
sum of the minimum and maximum element on it is less or equal to target. 
Since the answer may be too large, return it modulo 109 + 7.
*/

signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {
        int target;
        ip n >> target;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        vector<vector<int>> dp(n + 1, vi (target + 1));

        // DP initialization
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= target; j++) {
                if(i == 0) dp[i][j] = 0;
                if(j == 0) dp[i][j] = 1;
            }
        }

        for(int i = 1; i <= n; i++) {
            for(int sum = 0; sum <= target; sum++) {
                if(a[i - 1] <= sum) {
                    // Include the element
                    // int op1 = dp[i - 1][sum - a[i - 1]];
                    // Exclude the element
                    // int op2 = dp[i - 1][sum];
                    dp[i][sum] = (dp[i - 1][sum - a[i - 1]] + dp[i - 1][sum]) % MOD;
                    // dp[i][sum] = (op1 + op2) % MOD;
                } else {
                    dp[i][sum] = (dp[i - 1][sum]) % MOD;
                }
            }
        }
        // deb(dp);

        op dp[n][target] << endl;
    }
}