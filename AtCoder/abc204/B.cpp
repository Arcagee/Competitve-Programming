#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int  n; ip n;
    vector<int> a(n);
    for(auto &x: a) {
        ip x;
        x -= 10;
    }
    int sum = 0;
    for(auto x: a) {
        if(x > 0) {
            sum += x;
        }
    }
    op sum<<endl;
}