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
        if(n % 2 != 0) {
            n -= 1;
        } 
        int ele = 0;
        // op n/2 << endl;
        for(int i = 1; i <= sqrt(n) ; i++) {
            if(n % i == 0) {
                ele = i;
                // break;
            }
        }
        
    }
}