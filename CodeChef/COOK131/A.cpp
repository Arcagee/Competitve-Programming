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
        int x, y;
        ip x >> y;
        if(__gcd(x, y) > 1) {
            op 0 << endl;
        } else {
            if(x % 2 == 0 && y % 2 != 0) {
                op 1 << endl;
            } else if(y % 2 == 0 && x % 2 != 0) {
                op 1 << endl;
            } else {
                int maxi = max(x, y);
                int mini = min(x, y);
                if(mini == 1) {
                    op 2 << endl;
                } else {
                    if(__gcd(maxi + 1, mini) > 1) {
                        op 1 << endl;
                    } else if(__gcd(maxi, mini + 1) > 1) {
                        op 1 << endl;
                    } else {
                        op 2 << endl;
                    }
                }
            }
        }
    }
}