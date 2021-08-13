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
        int k;
        ip n >> k;
        // if(k > 100) k = 100;
        vector<pair<int, int>> a;
        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            a.push_back({x, i + 1});
        }

        int ans = INT32_MIN;
        for(int i = n - 1; i >= 0; i--) {
            for(int j = i - 1; j >= 0; j--) {
                if(i != j) {
                    if(a[i].second * a[j].second < ans) break;
                    ans = max(a[i].second * a[j].second - k * (a[i].first | a[j].first), ans);
                }
            }
        }

        op ans << endl;
    }
}