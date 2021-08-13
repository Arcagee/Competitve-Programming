#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, q;
    string s;
    ip n >> q;
    ip s;
    // Using prefix sum
    int pf[n];
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            pf[i] = (s[i] - 'a' + 1);
        } else {
            pf[i] = s[i] - 'a' + 1 + pf[i - 1];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     op pf[i] << " ";
    // } op endl;
    
    for(int i = 0; i < q; i++) {
        int l, r;
        ip l >> r;
        int ans;
        if(l == 1 || r == 1) {
            ans = pf[r - 1];
            op ans << endl;
            continue;
        } 
        
        ans = pf[r - 1] - pf[l - 2]; 
        op ans << endl;
    }
}