#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int k, r;

    ip k >> r;

    int val = k % 10;

    for(int i = 1; i <= 9; i++) {
        if((k * i) % 10 == 0 or (k * i) % 10 == r) {
            op i << endl;
            break;
        }
    }
}