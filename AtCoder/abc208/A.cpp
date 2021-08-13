#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int a, b;
    ip a >> b;
    if(b <= 6 * a && b >= a) {
        op "Yes" << endl;
    } else {
        op "No" << endl;
    }
}