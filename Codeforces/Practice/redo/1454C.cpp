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
        mpii mp;
        for(int i = 0; i < n; i++) {
            ip a[i];
            mp[a[i]]++;
        }

        int mini = INT_MAX, ele;
        for(auto x : mp) {
            if(x.second < mini) {
                ele = x.first;
                mini = x.second;
            }
        }
        if(mp.size() == 1) {
            op 0 << endl;
            continue;
        }
        int ele2 = a[0];
        int ele3 = a[n - 1];
        int cnt = 0;
        int ans = INT_MAX;
        if(ele2 == ele3) {
            int l = 0, r = n - 1;
            while(a[l] == ele2) l++;
            while(a[r] == ele2) r--;
            for(int i = l; i <= r; i++) {
                if(a[i] == ele2) {
                    cnt++;
                    while(a[i] == ele2) i++;
                } 
            }
            ans = min(ans, cnt + 1);
        } else {
            cnt = 0;
            int l = 0;
            while(a[l] == ele2) l++;
            for(int i = l; i < n - 1; i++) {
                if(a[i] == ele2) {
                    cnt++;
                    while(i < n - 1 && a[i] == ele2) i++;
                }       
            }
            ans = min(ans, cnt + 1);

            cnt = 0;
            int r = n - 1;
            while(a[r] == ele3) r--;
            for(int i = 1; i <= r; i++) {
                if(a[i] == ele3) {
                    cnt++;
                    while(i < n - 1 && a[i] == ele3) i++;
                }
            } 
            ans = min(ans, cnt + 1);
        }
        
        cnt = 0;
        if(ele2 != ele || ele3 != ele) {
            for(int i = 1; i < n - 1; i++) {
                if(a[i] == ele) {
                    cnt++;
                    while(i < n - 1 && a[i] == ele) i++;
                }
            }
            ans = min(cnt + 1, ans);
        }


        op ans << endl;
    }
}