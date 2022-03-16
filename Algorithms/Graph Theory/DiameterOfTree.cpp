/*
Diameter of a tree:
It is defined as the longest path between any two nodes in the tree.

NOVICE APPROACH
We would run DFS, N times.
In each iteration, we would set ith node as root and find distance of
farthest node.
Complexity: O(N^2)

BETTER APPROACH
We can find the diameter in 2 DFS only.
Take any arbitrary node as root and run DFS from it and find the farthest 
node, let this node be x. Now run DFS from this x node and find the distance
to the farthest node from this node. It will be the diameter of the tree.
*/

#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vb vector<bool>
#define vi vector<int>
#define vvi vector<vector<int>>
#define MOD 1000000007

vvi adj(100001);
vi vis(100001);
vi dist(100001);

void dfs(int node, int d) {
    vis[node] = 1;
    dist[node] = d;
    for(auto child: adj[node]) {
        if(!vis[child]) {
            dfs(child, dist[node] + 1);
        }
    }
}

signed main() {
    tsukuyomi
    int n, m; 
    ip n;

    for(int i = 1; i <= n - 1; i++) {
        int a, b;
        ip a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(1, 0);

    int diaNode = 0, d = 0;
    for(int i = 1; i <= n; i++) {
        if(dist[i] > d) {
            d = dist[i];
            diaNode = i;
        }
    }
    // REMEMBER TO CLEAR THE ADJACENCY LIST IN THESE CASES 
    for(int i = 1; i <= n; i++) {
        vis[i] = 0;
        dist[i] = 0;
    }

    dfs(diaNode, 0);

    for(int i = 1; i <= n; i++) {
        if(dist[i] > d) {
            d = dist[i];
        }
    }

    op d << " " << endl;
}