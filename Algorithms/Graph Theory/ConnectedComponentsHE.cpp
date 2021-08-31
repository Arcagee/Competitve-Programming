// COUNTING CONNECTED COMPONENTS USING DFS

#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long

vector<int> adj[1000001];
vector<int> vis(1000001);

void dfs(int n) {
    vis[n] = 1;
    for(auto x: adj[n]) {
        if(!vis[x]) {
            dfs(x);
        }
    }
}

signed main(){
    tsukuyomi
    int n, e;
    ip n >> e;
    for(int i = 1; i <= e; i++) {
        int x, y;
        ip x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i);
            cnt++;
        } 
    }

    op cnt << endl;
}