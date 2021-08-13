#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    string s;
    ip s;
    vector<int> a(s.size(), 0);
    vector<int> pf(s.size());
    pf[0] = 0;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            a[i]++;
        }
    }

    for(int i = 0; i < s.size(); i++) {
        if(i == 0) {
            pf[i] = 0;
        } else {
            pf[i] = a[i] + pf[i - 1];
        }
    }

    int n;
    ip n;
    for(int i = 0; i < n; i++) {
        int l, r;
        ip l >> r; l--; r--;
        int cnt = 0;
        int ans = pf[r] - pf[l];
        if(ans < 0) ans = 0;
        op ans << endl;
    }
}