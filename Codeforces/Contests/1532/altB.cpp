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
        vector<bool> b(2 * n, 0);
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            ip a[i];
            b[a[i]] = 1;
        } 

        for(int i = 1; i < 2 * n; i++) {
            b[i * a[i]]++;
        }
    }
}