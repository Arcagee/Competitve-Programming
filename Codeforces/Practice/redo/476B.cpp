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
 
void precomp(vi &fact) {
    fact[1] = 1;
    for(int i = 2; i <= 10; i++) {
        fact[i] = fact[i - 1] * i;
    }
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    vector<int> fact(11);
    fact[0] = 1;
    precomp(fact);
    // cin >> t;
    while(t--) {
        string s, k;
        ip s >> k;
        int pos = 0, neg = 0;
        for(int i = 0; i < s.size(); i++) {
            (s[i] == '+') ? pos++ : neg++;
        }

        int posk = 0, negk = 0;
        for(int i = 0; i < k.size(); i++) {
            if(k[i] == '?') continue;
            (k[i] == '+') ? posk++ : negk++;
        }

        if(posk == pos && negk == neg) {
            cout << 1 << endl;
            continue;
        }
        if(posk > pos || negk > neg) {
            cout << 0 << endl;
            continue;
        } else {
            int qcount = k.size() - (posk + negk);
            int need_pos = pos - posk, need_neg = qcount - need_pos;
            cout << setprecision(15) << (((fact[qcount] * 1.0) / (fact[need_pos] * fact[need_neg])) / pow(2, qcount)) << endl;
        }
    }
}