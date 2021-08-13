#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n;
    ip n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        ip b[i];
    }

    sort(b.begin(), b.end());
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            cnt++;
        }
    }

    if(cnt == n) op "Yes" << endl;
    else op "No" << endl;
}