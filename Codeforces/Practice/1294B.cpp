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
    cin>>t;
    while(t--){
        ip n;
        vector<pair<int, int>> v;

        for(int i = 0; i < n; i++) {
            int x, y;
            ip x >> y;
            v.push_back({x, y});
        }

        sort(v.begin(), v.end());
        string ans;
        int x = 0, y = 0;
        bool flag = 0;
        for(int i = 0; i < n; i++) {
            if(x > v[i].first or y > v[i].second) {
                flag = 1;
                op "NO" << endl;
                break;
            }
            while(v[i].first != x) {
                x++;
                ans.append("R");
            }

            while(v[i].second != y) {
                y++;
                ans.append("U");
            }
        }
        if(flag == 0) {
            op "YES" << endl;
            op ans << endl;
        }
    }
}