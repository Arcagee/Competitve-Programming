#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, s;
    ip s >> n;
    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++) {
        int x, y;
        ip x >> y;
        a.push_back(make_pair(x, y));
    }

    sort(a.begin(), a.end());
    bool flag = 0;
    for(int i = 0; i < n; i++) {
        if(a[i].first < s) {
            s += a[i].second;
        } else {
            flag = 1;
            op "NO"<<endl;
            break;
        }
    }
    if(flag == 0) {
        op "YES"<<endl;
    }
}