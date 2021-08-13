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
        vector<int> a(n);
 
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        int ans = 0;
        vector<int> sum(n);
        for(int i = n - 1; i >= 0; --i) {
            sum[i] = a[i];
            if(i + a[i] < n) {
                sum[i] += sum[i + a[i]];
            } 
            ans = max(ans, sum[i]);
        }
        op ans << endl;
    }
}