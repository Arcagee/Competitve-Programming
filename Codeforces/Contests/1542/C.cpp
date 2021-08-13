#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    double N = 1e9 + 7;
    double t, n;
    cin>>t;
    while(t--){
        ip n;
        if(n <= N) {
            op n * (n + 1) / 2;
        } else {
            double k = n - N;
            double ans = (N * (N + 1) / 2) + (k * (k + 1) / 2);
            op ans << endl;
        }
    }
}