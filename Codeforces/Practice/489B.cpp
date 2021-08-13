#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, m;
    ip n;
    vector<int> b(n);
    
    for(auto &x: b) {
        ip x;
    }
    ip m;
    vector<int> g(m);

    for(auto &x: g) {
        ip x;
    }

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    vector<bool> vis(m, 0);
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!vis[j] && abs(b[i] - g[j]) <= 1) {
                vis[j] = 1;
                cnt++;
                break;
            }
        }
    }

    op cnt << endl;
}