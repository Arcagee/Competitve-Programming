#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long

vector<int> adj[100001];
vector<bool> vis(100001);

void dfs(int n) {
    vis[n] = 1;
    for(auto x: adj[n]) {
        if(!vis[x]) {
            dfs(x);
        }
    }
}

signed main() {
    tsukuyomi
    int n, m;
    ip n >> m;
    for(int i = 1; i <= m; i++) {
        int x, y;
        ip x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i);
            cnt++;
        }
    }

    if(cnt == 1 && m == n - 1) {
        op "YES" << endl;
    } else { 
        op "NO" << endl;
    }
}