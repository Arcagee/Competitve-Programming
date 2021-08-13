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

    int cnt = 0;

    // Method #2
    while(n > 0) {
        cnt++;
        n = n & (n - 1);
    }
    op cnt << endl;
    // for(auto x: ans) {
    //     op x << " ";
    // }
    op endl;
}