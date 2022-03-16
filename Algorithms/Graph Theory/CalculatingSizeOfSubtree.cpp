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
 
vvi adj(100001);
vi vis(100001);
vi subtree(100001);

int dfs(int node) {
    vis[node] = 1;
    int cur_size = 1;
    for(auto child: adj[node]) {
        if(!vis[child]) {
            cur_size += dfs(child);
        }
    }
    return subtree[node] = cur_size;
}

signed main() {
    tsukuyomi
    int n, m;
    ip n >> m;
    
    for(int i = 1; i <= m; i++) {
        int a, b;
        ip a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    int node;
    ip node;

    int temp = dfs(1);

    op subtree[node] << endl;
}