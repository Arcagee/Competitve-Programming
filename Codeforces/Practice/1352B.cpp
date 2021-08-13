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
        if(n % k == 0) {
            for(int i = 0; i < k; i++) {
                op n/k << " ";
            } op endl;
            continue;
        } else {
            if(n % 2 != 0 && n - k > n/2) {
                op "NO" << endl;
            } else if(n % 2 != 0 && n - k <= n/2) {
                op "YES" << endl;
                
            }
        }
    }
}