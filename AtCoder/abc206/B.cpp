#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n;
    ip n;
    int i = 0;
    int ans = 0;
    int cur = 0;
    int z = 1;
    while(i < n) {
        ans++;
        i = i + z;
        z++;
        cur += i;
    }
    op ans << endl;
}