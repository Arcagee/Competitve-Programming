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
        int a, b;
        ip a >> b;
        while(a > b) {
            op "FACK" << endl;
            b++;
        }
        op endl;

    }
}