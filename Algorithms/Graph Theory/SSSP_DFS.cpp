// Single Source Shortest Path using DFS, works only for Trees
#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long

vector<int> adj[1001];
vector<int> vis(1001, 0);
vector<int> dist(1001, 0);
  
void dfs(int n, int d) {
    vis[n] = 1;
    dist[n] = d;
    for(auto x: adj[n]) {
        if(!vis[x]) {
            dfs(x, dist[n] + 1);
        }
    }
}

signed main(){
    tsukuyomi
    int n, q;
    ip n;
    for(int i = 1; i <= n - 1; i++) {
        int x, y;
        ip x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1, 0);
    
    ip q;
    int temp = 10001, ans = 10001;    
    while(q--) {
        int girl;
        ip girl;
        if(dist[girl] < temp) {
            temp = dist[girl];
            ans = girl;
        } else if(dist[girl] == temp) {
            ans = min(ans, girl);
        }
    }   

    op ans << endl;
}