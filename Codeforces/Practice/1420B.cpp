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
 
int setBitNumber(int n)
{
    // Below steps set bits after
    // MSB (including MSB)
 
    // Suppose n is 273 (binary
    // is 100010001). It does following
    // 100010001 | 010001000 = 110011001
    n |= n >> 1;
 
    // This makes sure 4 bits
    // (From MSB and including MSB)
    // are set. It does following
    // 110011001 | 001100110 = 111111111
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
 
    // The naive approach would increment n by 1,
    // so only the MSB+1 bit will be set,
    // So now n theoretically becomes 1000000000.
    // All the would remain is a single bit right shift:
    //    n = n + 1;
    //    return (n >> 1);
    //
    // ... however, this could overflow the type.
    // To avoid overflow, we must retain the value
    // of the bit that could overflow:
    //     n & (1 << ((sizeof(n) * CHAR_BIT)-1))
    // and OR its value with the naive approach:
    //     ((n + 1) >> 1)
    n = ((n + 1) >> 1) |
        (n & (1 << ((sizeof(n) * CHAR_BIT)-1)));
    return n;
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

        // we can find the last set bit for every number?
        // and then we can use that set bit and check if it is
        // set in other numbers aswell, if it is then the
        // AND will be greater than the XOR of the numbers
        mpii mp;
        for(int i = 0; i < n; i++) {
        	mp[setBitNumber(a[i])]++;
        }

        int cnt = 0;
        for(auto x : mp) {
        	if(x.second > 1) cnt += (x.second) * (x.second - 1)/2;
        }
        // deb(mp);
        op cnt << endl;
    }
}