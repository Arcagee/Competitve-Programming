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
        int even = 0, odd = 0;
        for(int i = 0; i < 2 * n; i++) {
            int x;
            ip x;
            if(x % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        if(even == odd) {
            op "YES" << endl;
        } else {
            op "NO" << endl;
        }

    }
}