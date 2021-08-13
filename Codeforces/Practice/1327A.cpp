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
        int k;
        ip n >> k;
        if(n % 2 == 0 && k % 2 == 0 && k * k <= n) {
            op "YES" << endl;
        } else if(n % 2 != 0 && k % 2 != 0 && k * k <= n) {
            op "YES" << endl;
        } else {
            op "NO" << endl;
        }
    }
}