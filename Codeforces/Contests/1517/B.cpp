#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        int m;
        ip n >> m;
        vector<pair<int, int>> v;
        int a[101][101];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                a[i][j] = 0;
                int x;
                ip x;
                v.push_back({x, i});
            }
        }

        sort(v.begin(), v.end());
        int cur = 0;
        for(int i = 0; i < m; i++) {
            a[v[cur].second][i] = v[cur].first;
            cur++;
        }

        while(cur < v.size()) {
            int i = 0;
            while(a[v[cur].second][i] != 0) {
                i++;
            }

            a[v[cur].second][i] = v[cur].first;
            cur++;
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                op a[i][j] << " ";
            } op endl;
        } op endl;
    }
}