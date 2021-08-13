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
    // cin>>t;
    // while(t--){
    ip n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        ip a[i];
    }
    for(int i = 0; i < n; i++) {
        ip b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnt = 0;
    for(int i = 0, j = n - 1; i < n, j > 0;) {
        if(a[j] - a[i] > b[j] - b[i]) {
            while(a[j] - a[i] + b[j] - b[i] > 0) {
                cnt++;
                i++;
            }
            i = 0;
            j--;
        } else {
            j--;
        }
    }
    op cnt << endl;
    // }
}