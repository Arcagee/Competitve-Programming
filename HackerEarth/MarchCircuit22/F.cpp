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
        for(int i = 0; i < n; i++) {
        	ip a[i];
        }

        int count = 0;
        for(int sz = 2; sz <= n; sz++) {
        	for(int j = 0; j < n;) {
        		int lastidx = j++, lim = sz - 1, cnt = 1;
        		// deb(lastidx);
        		while(lim-- && j < n) {
        			if(a[j] == a[lastidx]) { cnt++; j++; }
        			else break;
        		}

        		if(cnt == sz) {
        			// deb(a[lastidx], lastidx);
        			if(lastidx > 0) {
        				count += pow(2, lastidx - 1);
        			} 

        			count += sz;
        		}     
        		lastidx = j;
        	}
        }

        for(int sz = 2; sz <= n; sz++) {
        	for(int j = n - 1; j >= 0;) {
        		int lastidx = j--, lim = sz - 1, cnt = 1;
        		while(lim-- && j >= 0) {
        			if(a[j] == a[lastidx]) { cnt++; j--; }
        			else break;
        		}
        		// deb(cnt, sz);
        		if(cnt == sz) {
        			// deb(lastidx);
        			if(n - lastidx - 1 > 0)
        				count += pow(2, n - lastidx - 1); 
        			if(cnt == n) count += n;
        			count += sz;
        		}    
        		lastidx = j;
        	}
        }

        op count << endl;
    }
}