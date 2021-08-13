#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

signed main(){
    fast
    int t, n;
    ip n;
    
    // 1378

    int rem = n % 4;
    if(n == 0) {
        op 1 << endl;
        return 0;
    }
    if(rem == 0) {
        op 6 << endl;
    } else if(rem == 1) {
        op 8 << endl;
    } else if(rem == 2) {
        op 4 << endl;
    } else if(rem == 3) {
        op 2 << endl;
    }
}