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
    vector<int> a(n - 1);

    for(int i = 0; i < n - 1; i++) {
        ip a[i];
    }
    sort(a.begin(), a.end());
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        ans[i] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != i + 1) {
            op i + 1 << endl;
            break;
        }
    }
}