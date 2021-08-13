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
        int ans = 0;
        int x = 8;
        for(int i = 1; i <= (n - 1)/2 ; i++) {
            ans += x * i * i;
        }

        op ans << endl;
    }
}