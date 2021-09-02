#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long

vector<bool> vis(10001, 0);
vector<int> col(10001);

bool dfs(int n, bool color, vector<vector<int>> adj) {
    vis[n] = 1;
    col[n] = color;
    for(auto child: adj[n]) {
        if(!vis[child]) {
            if(dfs(child, color ^ 1, adj) == false) // color ^ 1 -> if(0) color = 1; if(1) color = 0
                return false;
        } else {
            if(col[n] == col[child])
                return false;
        }
    }

    return true;
}

signed main() {
    tsukuyomi
    int n, m;
    ip n >> m;
    vector<vector<int>> adj(10001);
    for(int i = 1; i <= m; i++) {
        int x, y;
        ip x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }    

    if(dfs(1, 0, adj)) {
        op "YES" << endl;
    } else {
        op "NO" << endl;
    }
}