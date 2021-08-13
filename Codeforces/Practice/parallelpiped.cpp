#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

signed main(){
    fast
    int a1, a2, a3;
    ip a1 >> a2 >> a3;

    int a, b, c;
    a = sqrt((a1*a2)/a3);
    b = sqrt((a3*a1)/a2);
    c = sqrt((a2*a3)/a1);

    op (a + b + c) * 4 << endl;
}