#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        int k = 2;
        int ans = 0;

        while(true) {
            ans = n / (pow(2, k) - 1);
            if(ans * (pow(2, k) - 1) == n) break;
            k++;
        }

        op ans << endl;
    }
}