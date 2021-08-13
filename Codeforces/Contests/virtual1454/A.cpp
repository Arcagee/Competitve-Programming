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
            a[i] = i + 1;
        }

        op a[n - 1] << " ";
        for(int i = 0; i < n - 1; i++) {
            op a[i] << " ";
        }
        op endl;
    }
}