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
        int w, h;
        ip w >> h >> n;
        int cnt = 1;
        while(w%2 == 0) {
            w /= 2;
            cnt*=2;
        }
        while(h%2 == 0) {
            h /= 2;
            cnt*=2;
        }
        if(cnt < n) {
            op "NO" << endl;
        } else {
            op "YES" << endl;
        }
    }
}