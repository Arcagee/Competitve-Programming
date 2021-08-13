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
        int ans = 0;
        while(n) {
            int r = n % 10;
            ans = max(ans, r);
            n = n/10;
        }

        op ans << endl;
    }
}