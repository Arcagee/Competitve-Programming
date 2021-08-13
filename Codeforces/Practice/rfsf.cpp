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
    int x = 1;

    while(t--){
        ip n;
        vector<int> a(n);

        for(auto &A: a) {
            ip A;
        }

        int cnt = INT32_MAX, ans = 0;
        int diff = (a[1] - a[0]);
        for(int i = 0; i < n - 1; i++) {
            if(diff == (a[i + 1] - a[i])) {
                cnt = min(a[i], cnt);
            } 
            ans = max(ans, a[i + 1] - cnt);
        }


        op "Case #" << x << ":" << " " << ans << endl;
        x++;
    }
}