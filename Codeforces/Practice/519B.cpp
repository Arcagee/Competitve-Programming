#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    ip n;
    map<int, int> a, b, c;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        ip v[i];
        a[v[i]]++;
    }
    for(int i = 0; i < n - 1; i++) {
        int temp;
        ip temp;
        b[temp]++;
    }
    for(int i = 0; i < n - 2; i++) {
        int temp;
        ip temp;
        c[temp]++;
    }
    int res1, res2;
    for(int i = 0; i < n; i++) {
        if(a[v[i]] != b[v[i]]) {
            res1 = v[i]; 
        } if(c[v[i]] != b[v[i]]) {
            res2 = v[i]; 
        }
    }
    op res1 << endl;
    op res2 << endl;
}