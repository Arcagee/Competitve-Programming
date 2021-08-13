#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int a, b, c;
    ip a>>b;
    if(a == b) {
        c = a;
    } else if(a == 1 && b == 2){
        c = 0;
    } else if(a == 2 && b == 1){
        c = 0;
    } else if(a == 0 && b == 1 || a == 1 && b ==0) {
        c = 2;
    } else if(a == 0 && b == 2 || a == 2 && b == 0) {
        c = 1;
    }
    op c<<endl;
}