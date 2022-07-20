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
 
bool check(vvi &a, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(a[i][j] < a[i][j - 1]) return false;
        }
    }

    return true;
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        int m;
        cin >> n >> m;
        vvi a(n, vi (m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ip a[i][j];
            }
        }
        bool flag = 0, res = 1;
        int pos1 = 0, pos2 = 0;
        for(int i = 0; i < n; i++) {
            multiset<int> temp;
            for(auto x : a[i]) {
                temp.insert(x);
            }
            int cnt = 0, j = 0;
            // deb(temp);
            for(auto x: temp) {
                if(x != a[i][j]) {
                    cnt++;
                    if(cnt == 1) pos1 = j;
                    if(cnt == 2) pos2 = j;
                }

                if(cnt > 2) {
                    flag = 1;
                    cout << -1 << endl;
                    break;
                }
                j++;

            }
            if(cnt == 2) {
                for(int i = 0; i < n; i++) {
                    swap(a[i][pos1], a[i][pos2]);
                }
                res = check(a, n, m);
                if(res == 1) break;
            }
            if(flag == 1) break;
        }

        if(flag == 0 && res == 1) {
            cout << pos1 + 1<< " " << pos2 + 1<< endl;
        } else if(flag != 1) cout << -1 << endl;
    }
}