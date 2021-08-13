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
        vector<int> a(n), h(n + 1, 0);

        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        for(int i = 0; i < n; i++) {
            int cnt = 1, l = i, r = i;
            while(cnt < a[i]) {
                if(a[l - 1] < a[i]) {
                    l--;
                    cnt++;
                } else if(a[r + 1] < a[i]) {
                    r++;
                    cnt++;
                } else break;
            }

            if(cnt == a[i]) {
                h[a[i]]++;
            }
        }

        for(int i = 1; i <= n; i++) {
            op h[i];
        } op endl;
    }
}