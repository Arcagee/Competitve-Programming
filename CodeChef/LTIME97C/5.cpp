#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
#define N 1000000007
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        unsigned long long a, b;
        ip a >> b;
        if(!(b & (b - 1)))op "YEs" << endl;
        else op "NO" << endl;
    }
}