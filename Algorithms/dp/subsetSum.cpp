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
 
bool isSubsetSum(vector<int>arr, int sum){
    // code here 
    int n = arr.size();
    vector<vector<bool>> dp(n + 1, vector<bool> (sum + 1));
    
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= sum; j++) {
            if(i == 0) dp[i][j] = false;
            if(j == 0) dp[i][j] = true;
        }
    }
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {
            if(arr[i - 1] <= j) {
                // As we can only use the elements of the array once everytime
                // either we decide to choose an element or not we will have to 
                // reduce the size of the array.
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            } else dp[i][j] = dp[i - 1][j];
        }
    }
    
    return dp[n][sum];
} 
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        int sum;
        ip n >> sum;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        op isSubsetSum(a, sum) << endl;
    }
}