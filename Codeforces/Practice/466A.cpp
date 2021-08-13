#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, m, a, b;
    ip n >> m >> a >> b;
    int ans = 0;
    
    while(n>0) {
        if(b < m * a && m <= n) {
            ans += b;
            n-=m;
        } else if(n < m && b < n * a) {
            ans += b;
            n = 0;
        } else {
            ans += a;
            n--;
        }
    }

    op ans << endl;
    
}