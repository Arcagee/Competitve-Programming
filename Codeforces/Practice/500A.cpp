#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, t;
    ip n >> t;
    vector<int> a(n+1);

    for(int i = 1; i < n; i++) {
        ip a[i];
    }

    for(int i = 1; i < n;) {
        i = i + a[i];
        if(i == t) {
            op "YES" << endl;
            break;
        } else if(i > t) {
            op "NO" << endl;
            break;
        }
    }
}