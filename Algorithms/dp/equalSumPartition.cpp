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
Problem statement
Given a non-empty array nums containing only positive integers, 
find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.
*/

signed main() {
    tsukuyomi
    int t = 1, n;
    // cin >> t;
    while(t--) {
        ip n;
        vi a(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            ip a[i];
            sum += a[i];
        }        

        // Problem is a variation of the subset sum problem
        // Equal sum partition is only possible when the sum of the
        // elements is even otherwise the array can never be divided
        // into partitions of equal subset sum
        if(sum % 2 != 0) {
            op 0 << endl;
        } else {
            // We donot have to find two subsets
            // we can just find one subset that has sum = sum/2

            int target = sum/2;
            
            vector<vector<bool>> dp(n + 1, vb (target + 1));

            // Initialization of dp array
            for(int i = 0; i <= n; i++) {
                for(int j = 0; j <= target; j++) {
                    if(i == 0) dp[i][j] = false;
                    if(j == 0) dp[i][j] = true;
                }
            }

            for(int i = 1; i <= n; i++) {
                for(int j = 0; j <= target; j++) {
                    if(a[i - 1] <= j) {
                        // We can choose the element, if we do so we need to 
                        // subtract it from the sum otherwise if we don't select
                        // it we just have to ignore it and move further
                        dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                    } else {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }

            op dp[n][target] << endl;
        }
    }
}