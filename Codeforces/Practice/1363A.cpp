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
        int x;
        ip n >> x;
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++) {
            int m;
            ip m;

            if(m % 2 == 0) even++;
            else odd++;
        }

        if(odd == 0) {
            op "NO" << endl;
            continue;
        }

        bool flag = 0;
        for(int i = 1; i <= odd;) {
            if(i > x) {
                break;
            }
            if((x - i) <= even) {
                flag = 1;
                op "YES" << endl;
                break;
            }
            i += 2;
        }
        if(flag == 0) {
            op "NO" << endl;
        }
    }
}