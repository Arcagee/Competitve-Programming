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
 
 

signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        ip n;
        vi a(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            ip a[i];
            sum += a[i];
        }
        int sum2 = sum;
        int num = 0;
        mpii mp;
        while(sum > 0) {
            if(sum % 2 == 0) {
                mp[sum/2] = pow(2, num + 1);
                num++;
            } else if(sum % 2 != 0) {
                int fl = sum/2; int cl = ceil((sum * 1.0)/2);
                mp[fl]++;
                mp[cl]++;
                num++;
            }

            sum /= 2;
        }

        sum = sum2;
        while(sum > 1) {
            if(sum % 2 == 0) {
                mp[sum/2] = pow(2, num);
                num++;
            } else if(sum % 2 != 0) {
                int fl = sum/2; int cl = ceil((sum * 1.0)/2);
                mp[fl]++;
                mp[cl]++;
                num++;
            }

            sum = ceil((sum * 1.0)/2);
        }
        int ans = 0;
        deb(mp);
        op ans << endl;
    }
}
