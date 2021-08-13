#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    int q;
    ip n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        ip a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < q; i++) {
        int x;
        ip x;
        int ans = lower_bound(a.begin(), a.end(), x) - a.begin(); 
        
        if(a[ans] == x) {
            op "0" << endl;
            continue;
        } else if((ans) % 2 == 0) {
            op "POSITIVE" << endl;
        } else {
            op "NEGATIVE" << endl;
        }
    }
}