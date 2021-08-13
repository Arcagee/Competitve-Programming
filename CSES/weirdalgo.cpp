#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int n;
    ip n;
    op n << " ";
    while(n > 1) {
        if(n % 2 == 0) {
            n /= 2;
            op n << " ";
        } else {
            n = (n * 3) + 1;
            op n << " ";
        }
    }
}