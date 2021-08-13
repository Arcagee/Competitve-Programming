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
        int m;
        ip n >> m;
        vector<int> a(n);
        vector<int> b(m);

        for(auto &x: a) {
            ip x;
        }
        sort(a.rbegin(), a.rend());

        for(auto &x: b) {
            ip x;
        }

        int ans = 0;
        int j = 0;
        for(int i = 0; i < n; i++) {
            int temp = b[a[i] - 1];
            if(b[j] < temp) {
                ans += b[j];
                j++;
            } else {
                ans += temp;
            }
        }

        op ans << endl;
    }
}