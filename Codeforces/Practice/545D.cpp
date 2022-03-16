#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int n;
    ip n;
    vi a(n);
    for(int i = 0; i < n; i++) {
        ip a[i];
    }

    sort(a.begin(), a.end());
    
    int tt = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(tt > a[i]) {
            cnt++;
            continue;
        }
        tt += a[i];
    }

    op n - cnt << endl;
}