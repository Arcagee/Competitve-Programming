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
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            mp[x]++;
        }
        int ans = 0;
        for(auto x: mp) {
            ans += min(x.second, x.first - 1);
        }

        op ans << endl;
    }
}