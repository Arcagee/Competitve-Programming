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
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        int ele = 0;
        for(int i = 0; i < n; i++) {
            ele = max(ele, a[i]);
        }
        int ans = (a[0] ^ ele);
        for(int i = 1; i < n; i++) {
            ans = ans | (a[i] ^ ele);
        }

        op ele << " " << ans << endl;
    }
}