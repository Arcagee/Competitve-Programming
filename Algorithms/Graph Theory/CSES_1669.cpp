// CSES -> Round Trip
// Topic -> Cycle Detection in a graph
#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long

vector<int> adj[1000001];
vector<int> vis(1000001);
vector<int> parent(1000001);
int st, ed;

bool dfs(int n, int par) {
    vis[n] = 1;
    parent[n] = par;
    for(auto x: adj[n]) {
        if(!vis[x]) {
            if(dfs(x, n) == true) {
                return true;
            }
        } else {
            if(x != par) {
                st = x;
                ed = n;
                return true;
            }
        }
    }

    return false;
}

bool all_nodes(int n) {
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            if(dfs(i, -1)) {
                return true;
            }
        }
    }

    return false;
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

    bool res = all_nodes(n);
    
    if(!res) {
        op "IMPOSSIBLE" << endl;
    } else {
        vector<int> ans;
        int cur = ed;
        ans.pb(ed);
        while(cur != st) {
            ans.pb(parent[cur]);
            cur = parent[cur];
        }
        ans.pb(ed);
        op ans.size() << endl;
        for(auto x: ans) {
            op x << " ";
        } op endl;
    }
}