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
    vector<int> a(n+1), b(n+1), c(n+1);
    for(int i=1; i<=n; i++){
        ip a[i];
    }
    for(int i=1; i<=n; i++){
        ip b[i];
    }
    for(int i=1; i<=n; i++){
        ip c[i];
    }
    int cnt = 0;
    vector<int> count(n+1, 0);
    for(int i=1; i<=n; i++){
        count[b[c[i]]]+=1;
    }
    for(int i=1; i<=n; i++){
        cnt += count[a[i]];
    }
    op cnt<<endl;
}