#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

unordered_map<int, int> mp;
int count(int n, int a, int b, int c) {
    if(n == 0)
        return 0;
    if(n < 0) 
        return INT64_MIN;
    if(mp.count(n)) {
        return mp[n];
    }
    return mp[n] = 1 + max({count(n - a, a, b, c), count(n - b, a, b, c), count(n - c, a, b, c)});
}

signed main(){
    fast
    int n, a, b, c;
    ip n >> a >> b >> c;
    op count(n, a, b, c) << endl;
}