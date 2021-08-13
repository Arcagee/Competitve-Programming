#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, t;
    ip n >> t;
    vector<int> a(n + 1);

    for(int i = 1; i <= n; i++) {
        ip a[i];
    }
    int pf[n + 1] = {0};

    for(int i = 1; i <= n; i++) {
        pf[i] = pf[i - 1] + a[i]; 
    }
    // for(int i = 0; i <= n; i++) {
    //     op pf[i] << " ";
    // } op endl;
    int ans = 0, cnt = 0, res = 0;
    
    int l = 1;
    int r = 1;
    while(r <= n) {
        while(pf[r] - pf[l - 1] > t) {
            l++;
        }
        res = max(res, r - (l - 1));
        r++;
    }
    // for(int i = 1; i <= n; i++) {
    //     for(int j = i; j <=n; j++) {
    //         ans = pf[j] - pf[i - 1];
    //         if(ans <= t) {
    //             // op j;
    //             res = max(res, j - (i - 1));
    //         }
    //     } op endl;
    // }

    op res << endl;
}