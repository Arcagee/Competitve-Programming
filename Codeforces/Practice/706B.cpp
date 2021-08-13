#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    ip n;
    vector<int> a(n);
    for(auto& x: a) {
        ip x;
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int q;
    ip q;
    while(q--) {
        int temp;
        ip temp;
        ans = upper_bound(a.begin(), a.end(), temp) - a.begin();
        if(temp < a[0]) {
            op 0 << endl;
        } else if(temp >= a[n - 1]) {
            op n << endl;
        } else {
            op ans << endl;
        }
    }
}