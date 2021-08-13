#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    tsukuyomi
    int t, n;
    cin>>t;
    while(t--){
        n = 7;
        int ans = 0;
        for(int i = 1; i < n; i++) {
            (i < n/2) ? ans -= i: ans += i;
        }

        op ans << endl;
    }
}