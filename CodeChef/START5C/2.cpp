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
        int a, b;
        ip n >> a >> b;

        int time = 2 * (180 + n);
        int ans = time - (a + b);

        op ans << endl;
    }
}