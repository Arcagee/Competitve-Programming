#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, k;
    ip n >> k;
    vector<int> a(n+1);

    for(int i = 1; i <= n; i++) {
        a[i] = 5 * i;
    }

    int cnt = 0, ans = 0;
    int lim = 240 - k;
    for(int i = 1; i <= n; i++) {
        cnt += a[i];
        ans = i;
        if(cnt > lim) {
            ans = i - 1;
            break;
        }
    }

    op ans << endl;
}