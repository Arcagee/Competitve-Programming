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
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) {
            ip a[i];
        }

        for(int i = 1, j = n; i <= j; i++, j--) {
            if(i == j) {
                op a[i] << " ";
                continue;
            }
            op a[i] << " " << a[j] << " ";
        }

        op endl;
    }
}