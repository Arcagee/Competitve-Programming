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
 
bool isValid(string s) {
    for(auto x : s) {
        if(x == '0' || x == '1' || x == '2' || x == '5' || x == '8' || x == ':')
            continue;
        else return false;
    }

    return true;
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        int h, m;
        ip h >> m;
        string s;
        ip s;
        if(isValid(s)) {
            // cout << "00:00" << endl;
            reverse(s.begin(), s.end());
        } 
        vector<int> inc = {0, 1, 2, 5, 8};
        int hr = stoi(s.substr(0, 2)), mi = stoi(s.substr(3, 2));
        int og_time = hr * 100 + mi, max_time = h * 100 + m, min_diff = INT_MAX;
        deb(og_time, max_time, mi);
        if(og_time >= max_time) og_time = 0;
        vector<int> ans(4);
        for(int h1 = 0; h1 < inc.size(); h1++) {
            for(int h2 = 0; h2 < inc.size(); h2++) {
                for(int m1 = 0; m1 < inc.size(); m1++) {
                    for(int m2 = 0; m2 < inc.size(); m2++) {
                        int time = inc[h1] * 1000 + inc[h2] * 100+ inc[m1] * 10 + inc[m2];
                        int diff = (time - og_time < 0) ? max_time - og_time + time : time - og_time;
                        if(time < max_time && diff < min_diff) {
                            min_diff = diff;
                            ans[0] = inc[h1]; 
                            ans[1] = inc[h2];
                            ans[2] = inc[m1];
                            ans[3] = inc[m2];
                        }
                    }
                }
            }
        }

        op ans[0] << ans[1] << ':' << ans[2] << ans[3] << endl; 
    }
}