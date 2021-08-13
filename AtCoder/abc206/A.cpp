#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    double n;
    ip n;
    if(floor(n * 1.08) < 206) {
        op "Yay!" << endl;
    } else if(floor(n * 1.08) == 206){
        op "so-so" << endl;
    } else {
        op ":(" << endl;
    }
}