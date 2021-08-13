#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        // D -> days, d -> interval, Q-> increase, P -> default
        int D, d, P, Q;
        ip D>>d>>P>>Q;
        int ans = (D/2) * (P + (D-d) * Q);
        op ans<<endl;
    }
}