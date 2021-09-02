// IN/OUT Time of a graph using DFS

/*
Given 2 nodes, find whether one node lies in the subtree of other node.
When you reach a node for the first time it is called as the IN time, when
the node processes all it's children and it's ready to traceback to node 1
its called it's OUT time.
Tutorial -> https://youtu.be/G0N7j-x3YT4

INPUT
5 4
1 2
2 3
2 4
4 5

EXPECTED OUTPUT
1 2 3 5 6
10 9 4 8 7

* The IN time of a member of the subtree will be higher than the parent
* The OUT time of a child will be lower than the parent
* If there are mode than one subtrees from the root then the IN/OUT time of one
  will be lower/higher than the other subtree as the tree has to be traversed 
  before moving to another subtree.

Using these observations we can determine whether a node lies in the subtree
of another node.
*/

#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long

vector<int> adj[100001];
vector<int> vis(100001);
vector<int> in(100001);
vector<int> out(100001);
int timer = 1;

void dfs(int node) {
    vis[node] = 1;
    in[node] = timer++;

    for(auto child: adj[node]) {
        if(!vis[child]) {
            dfs(child);
        }
    } 

    out[node] = timer++;
}

void print(vector<int> a, int n) {
    for(int i = 1; i <= n; i++) {
        op a[i] << " ";
    } op endl;
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

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i);
        }
    }

    print(in, n);
    print(out, n);
}