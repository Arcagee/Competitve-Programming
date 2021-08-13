#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int  n;
    ip n;
    unordered_set<int> a;

    for(int i = 0; i < n; i++) {
        int x;
        ip x;
        a.insert(x);
    }

    int len = a.size() + 1;
    int ans = (len * (len + 1))/2;
    op ans << endl;
}