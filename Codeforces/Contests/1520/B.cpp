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
        // if(n <= 9) {
        //     op n << endl;
        //     continue;
        // }
        int i = 1, z = 1, cnt = 0;
        while(i <= n) {
            if(i > n) {
                break;
            }
            if(i % 10 == 0) {
                z = i + 1;
                i = z;
                continue;
            }
            i += z;
            cnt++;
        }

        op cnt << endl;
    }
}