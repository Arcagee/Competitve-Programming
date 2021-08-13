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
        ip n;
        vector<int> a(n);
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++) {
            ip a[i];
            v.push_back({a[i], i + 1});
        }
        sort(a.begin(), a.end());
        int cnt = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[j] - a[i] == v[a[j]].second - v[a[i]].second) break;
                else cnt++;
            }

            ans = max(ans,cnt);
        }

        op ans << endl;
    }
}