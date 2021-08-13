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
        int ans1 = n/3;
        int ans2 = n - 2 * (n/3);
        if(ans2 - ans1 > 1) {
            ans2 -= 2;
            ans1++;
        }
        op ans2 << " " << ans1 << endl;
    }
}