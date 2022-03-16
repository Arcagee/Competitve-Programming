#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t, n;
    // cin >> t; 
    t = 1;
    while(t--) {
        int m;
        ip n >> m;
        vector<int> a(n + 2);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            ip a[i];
            sum += a[i];
        }
        for(int i = 0; i < m; i++) {
            int u, v;
            ip u >> v;
        }
        int q;
        ip q;
        int total = n * (n - 1) / 2;
        int cnt = m;
        while (q--) {
            char c;
            ip c;
            if(c == '?') {
                int add = total - cnt;
                op sum + (cnt - add) << endl;
            } else if(c == '+') {
                int u, v;
                ip u >> v;
                cnt++;
            }
            else{
                int u, v;
                ip u >> v;
                cnt--;
            }
        }
    }
}