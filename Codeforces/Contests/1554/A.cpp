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
        int ans = 0;
        for(int i = 0; i < n - 1; i++) {
            int maxi = max(a[i], a[i + 1]);
            int mini = min(a[i], a[i + 1]);
            ans = max(ans, maxi * mini);
        }

        op ans << endl;
    }
}