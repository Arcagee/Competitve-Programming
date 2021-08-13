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
        int k;
        ip n >> k;
        if(k < n) {
            op k << endl;
        } else {
            int div = k/(n - 1);
            int ans = k + div;
            if((k + div) % n == 0) {
                ans -= 1;
            }

            op ans << endl;
        }
    }
}