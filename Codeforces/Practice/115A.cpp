#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long

vector<int> adj[2002];


int dfs(int node) {
    int cnt = 0;
    for(auto x: adj[node]) {
        cnt = max(cnt, dfs(x));
    }

    return cnt + 1;
}
signed main(){
    fast
    int n;
    ip n;
    vector<int> ele(n + 1);
    for(int i = 1; i <= n; i++) {
        ip ele[i];
        adj[ele[i]].push_back(i);
    }
    
    int ans = 0;

    for(int i = 1; i <= n; i++) {
        if(ele[i] == -1) 
            ans = max(ans, dfs(i));
    }

    op ans << endl;
}