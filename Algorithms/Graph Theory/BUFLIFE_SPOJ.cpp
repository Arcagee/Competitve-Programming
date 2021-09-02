// BUGLIFE -> https://www.spoj.com/problems/BUGLIFE/ 
// Topic -> Bipartite Graphs
#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long

vector<int> adj[1000001]; 
vector<int> col(1000001);
vector<int> vis(1000001);

bool dfs(int n, int color) {
    vis[n] = 1;
    col[n] = color;
    for(auto child: adj[n]) {
        if(!vis[child]) {
            if(!dfs(child, color ^ 1))
                return false;
        } else {
            if(col[child] == col[n]) 
                return false;
        }
    }

    return true;
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    int num = 1;

    while(t--) { 
        int m;
        ip n >> m;
        for(int i = 1; i <= n; i++) {
        	adj[i].clear();
            vis[i] = 0;
            col[i] = 0;
        }
        for(int i = 1; i <= m; i++) {
            int x, y;
            ip x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }

        op "Scenario #" << num << ":" << endl;
        num++;

        bool ans = true;

        for(int i = 1; i <= n; i++) {
            if(!vis[i]) {
                bool res = dfs(i, 0);
                if(res == false) {
                    ans = false;
                }
            }
        }

        if(ans) {
            op "No suspicious bugs found!" << endl; 
        } else {
            op "Suspicious bugs found!" << endl;
        }
    }
}   