#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int n, i;
    ip n >> i;
    int num = 1;
    num = num << i;
    
    int ans = (n & num);

    if(ans == 0) {
        op "Not Set" << endl;
    } else {
        op "Set" << endl;
    }
}