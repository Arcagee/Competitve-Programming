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
        int l, r;
        ip n >> l >> r;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        sort(a.begin(), a.end());
        
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            cnt += upper_bound(a.begin(), a.end(), r - a[i]) - a.begin();
            cnt -= lower_bound(a.begin(), a.end(), l - a[i]) - a.begin();

            if(2 * a[i] >= l && 2 * a[i] <= r) {
                cnt--;
            }
        }

        op cnt/2 << endl;
    }
}