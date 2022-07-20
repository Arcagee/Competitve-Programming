/* Author: ankush_kr */
#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
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
 
// const int INF = 1e18;
const long long MOD = 1000000007;
 
/* 
Problem Statement:
Consider a money system consisting of n coins. Each coin has a positive integer value. 
Your task is to calculate the number of distinct ordered ways you can produce a money 
sum x using the available coins.
*/
int dpp[101][100001];


int noOfWays(int n, int x, vi &coins) {
    // Base Case
    if(n == 0) return dpp[n][x] = 0;
    
    if(x == 0) return dpp[n][x] = 1;

    // if(x < 0) return 0;

    if(dpp[n][x] != -1) return dpp[n][x];

    if(coins[n] <= x) {
        return dpp[n][x] = noOfWays(n - 1, x, coins) % MOD + noOfWays(n, x - coins[n], coins) % MOD;
    } else {
        return noOfWays(n - 1, x, coins) % MOD;
    }
}

signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {
        int x;
        ip n >> x;
        vi a(n + 1);

        for(int i = 1; i <= n; i++) {
        	ip a[i];
        }

        // Recursive Approach
        memset(dpp, -1, sizeof(dpp));
        op noOfWays(n, x, a) << endl;


        // Iterative Approach:= More Effecient
        int dp[n + 1][x + 1];
        
        for(int i = 1; i <= n; i++) {
        	for(int sum = 0; sum <= x; sum++) {
        		if(sum == 0) dp[i][sum] = 1;
        		else {
        			int op1 = (a[i] > sum) ? 0 : dp[i][sum - a[i]];
        			int op2 = (i == 1) ? 0 : dp[i - 1][sum];
        			dp[i][sum] = (op1 + op2) % MOD;
        		}
        	} 
        }
        op dp[n][x] << endl;
    }
}