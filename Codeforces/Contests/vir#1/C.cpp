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
        vector<int> sum;
        for(int i = 0; i < n; i++) {
            int s = a[i];
            for(int j = i + a[i]; j < n;) {
                if(j > n) break;
                s += a[j];
                j += a[j];
            }
            sum.push_back(s);
        }
        int ans = 0;
        for(auto x: sum) {
            ans = max(x, ans);
        }

        op ans << endl;
    }
}