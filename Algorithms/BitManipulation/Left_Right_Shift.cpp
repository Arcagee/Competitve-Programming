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
    
    // Left-Shift 
    op n << " << " << i << " = " << (n << i) << endl;

    // Right-Shift
    op n << " >> " << i << " = " << (n >> i) << endl;
}