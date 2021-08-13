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
        int r, b, d;
        ip r >> b >> d;
        if(abs(r - b) <= d) {
            op "YES" << endl;
        } else {
            int mini = min(r, b);
            int maxi = max(r, b);
            string ans = "NO";
            if((d + 1) * mini >= maxi) {
                ans = "YES";
            }

            op ans << endl;
        }
    }
}