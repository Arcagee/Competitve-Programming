#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int k;
    ip k;
    while(k--) {
        int n, x, t;
        ip n >> x >> t;

        if(x > t) {
            op 0 << endl;
            continue;
        }

        if(t/x >= n - 1) {
            int ans = ((n - 1) * (n))/2;
            op ans << endl;
        } else {
            int temp = t/x;
            int res1 = temp * (temp + 1) / 2;
            int res2 = (n - 1 - temp) * temp;

            op res1 + res2 << endl;
        }
    }
}