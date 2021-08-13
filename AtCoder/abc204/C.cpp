#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

int cnt = 0;

void dfs(int node, vector<int> adj[], vector<int> &vis) {
    vis[node] = 1;
    for(auto x: adj[node]) {
        if(vis[x] == 0) {
            cnt++;
            dfs(x, adj, vis);
        }
    }
}

signed main(){
    fast
    int n, m;
    ip n >> m;
    vector<int> adj[n + 1];
    for(int i = 1; i <= m; i++) {
        int a, b;
        ip a >> b;
        adj[a].push_back(b);
    }

    for(int i = 1; i <= n; i++) {
        // We will fix the root node for the dfs of every node
        // and we might have to reset the visited array for every node
        // can take a universal cnt var
        vector<int> vis(n+1, 0);
        dfs(i, adj, vis);
    }

    op (cnt + n) << endl;
}