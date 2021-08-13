#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long

int square(int n)
{
    if (n == 0)
        return 0;
 
    if (n < 0)
        n = -n;
 
    int x = n >> 1;

    if (n & 1)
        return ((square(x) << 2) + (x << 2) + 1);
    else 
        return (square(x) << 2);
}

signed main(){
    fast
    int t, n;
        int q;
        ip n >> q;    
        vector<int> a(n + 1);

        for(int i = 1; i <= n; i++) {
            ip a[i];
        }    

        for(int i = 0; i < q; i++) {
            int m;
            ip m;
            if(m == 1) {
                int l, r, x;
                ip l >> r >> x;

                for(int i = l; i <= r; i++) {
                    if(i >= l && i <= r) {
                        int exp = x + i - l;
                        a[i] += exp * exp;
                    }
                }
            } else if(m == 2) {
                int z; ip z;
                op a[z] << endl;
            }
        } 
}