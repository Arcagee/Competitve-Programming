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
        vector<pair<int, int>> a;
        for(int i = 0; i < n; i++) {
            int x, y;
            ip x >> y;
            a.push_back({x, y});
        }
        sort(a.rbegin(), a.rend());
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int price = 0;
            int vit = a[i].first;
            price += a[i].second/2;
            if(price > m) continue;
            for(int j = 0; j < n; j++) {
                if(i == j) continue;
                price += a[j].second;
                if(price > m) break;
                vit += a[j].first;
            }
            ans = max(vit, ans);
        }

        op ans << endl;
    }
}