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
        int a, b, m;
        ip a >> b >> n >> m;

        int mini = min(a, b);
        int maxi = max(a, b);

        if(maxi - mini == 0) {
           int ans = min(2 * n, m);
           op ans * mini << endl; 
        } else {
            int diff = maxi - mini;
            int ans = (diff * n) + (2 * mini * n);
            int res = (diff * n) + (mini * m);

            op min(res, ans) << endl;
        }
    }
}