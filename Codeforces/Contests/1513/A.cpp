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
        if(k > n - (n/2 + 1)) {
            op -1 << endl;
            continue;
        }
        int num = n, i = 1;
        for(int j = 1; j <= n; j++) {
            if(j % 2 != 0) {
                op i << " ";
                i++;
            } else if(k > 0 && j % 2 == 0) {
                op num << " ";
                num--;
                k--;
            } else {
                op i << " ";
                i++;
            }
        } op endl;
    }
}