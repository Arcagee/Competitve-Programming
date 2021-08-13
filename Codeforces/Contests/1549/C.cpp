#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long

signed main(){
        tsukuyomi
    int t, n;
        int m;
        ip n >> m;
        vector<int> adj[n + 1];
        for(int i = 0; i < m; i++) {
            int a, b;
            ip a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }        
        int q;
        ip q;
        int cnt = 0;
        for(int i = 0; i < q; i++) {
            int x;
            ip x;
            if(x == 1) {
                int a, b;
                ip a >> b;
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
 
            if(x == 2) {
                int a, b;
                ip a >> b;
            }
 
            if(x == 3) {
                // int cnt = 0;
                vector<bool> killed(n + 1, 0);
                for(int i = 1; i < n; i++) {
                    if(adj[i].size() >= 1) {
                        for(auto x: adj[i]) {
                            if(x > i && killed[i] != 1) {
                                killed[i] = 1;
                                cnt++;
                                break;
                            }   
                        }
                    }
                }
                op n - cnt << endl;
                cnt = 0;
            }
        }
}