#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        vector<int> k = a;
        sort(k.begin(), k.end());
        if(k == a) {
            op 0 << endl;
            continue;
        }
        
        if(a[0] == 1 or a[n - 1] == n) {
            op 1 << endl;
        } else if(a[n - 1] == 1 && a[0] == n) {
            op 3 << endl;
        } else {
            op 2 << endl;
        }
    }
}