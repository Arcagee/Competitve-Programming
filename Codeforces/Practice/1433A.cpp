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

        int ans = 0, res = 0;
        int cnt = 0;
        int i = 1;
        int x = 0;
        while(i <= 9999) {
            cnt++;
            res += cnt;
            ans += i * (pow(10, x));
            if(ans == n) break;
            if(cnt == 4) {
                i++;
                ans = 0;
                x = -1;
                cnt = 0;
            }
            x++;
        }

        op res << endl;
    }
}