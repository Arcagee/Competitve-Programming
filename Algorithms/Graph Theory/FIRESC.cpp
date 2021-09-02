#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define MOD 1000000007

int cnt;
vector<int> adj[1000001];
vector<bool> vis(1000001);

void dfs(int node) {
    vis[node] = 1;
    cnt++;
    for(auto x: adj[node]) {
        if(!vis[x]) {
            dfs(x);
        }
    }
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int m;
        ip n >> m;

        for(int i = 1; i <= n; i++) {
            adj[i].clear();
            vis[i] = 0;
        }

        for(int i = 1; i <= m; i++) {
            int a, b;
            ip a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }

        int grp = 0, lead = 1;
        for(int i = 1; i <= n; i++) {
            if(!vis[i]) {
                cnt = 0;
                dfs(i);
                lead = (lead * cnt) % MOD;
                grp++;
            }
        }

        op grp << " " << lead << endl;
    }
}