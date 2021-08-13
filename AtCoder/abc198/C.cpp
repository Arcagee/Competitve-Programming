#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    double r, x, y;
    ip r >> x >> y;

    double dis = sqrt(pow(x, 2) + pow(y, 2));
    if(dis <= 2 * r && dis != r) {
        op 2 << endl;
    } else {
        op ceil(dis / r) << endl;
    }
}