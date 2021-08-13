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
        ip n;
        int r, b, d;
        ip r >> b >> d;

        if(abs(r - b) <= d) {
            op "YES" << endl;
        } else {
            if(d == 0) {
                op "NO"  << endl;
                continue;
            }
            if((r + b) % d == 0) {
                op "YES" << endl;
            } else {
                op "NO" << endl;
            }
        }
    }
}