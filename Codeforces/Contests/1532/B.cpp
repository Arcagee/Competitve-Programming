#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
#define endl '\n'
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<pair<int, int>> a;

        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            a.push_back({x, i + 1});
        }

        sort(a.begin(), a.end());
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int pro = a[i].first * a[j].first;
                int sum = a[i].second + a[j].second;

                if(pro > 2 * n) break;
                if(pro == sum) cnt++;
            }
        }

        op cnt << endl;
    }
}