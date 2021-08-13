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
        ip n;
        if(n <= 6){
            op 15 << endl;
            continue;
        }
        int ans = n * 2 + n/2;
        while(ans % 5 != 0) {
            ans++;
        }
        op ans << endl;
    }
}