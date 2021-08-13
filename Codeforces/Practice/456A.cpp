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
    vector<pair<int, int>> a;

    for(int i = 0; i < n; i++) {
        int x, y;
        ip x >> y;
        a.push_back({y, x});
    }

    sort(a.rbegin(), a.rend());
    
    for(int i = 0; i < n - 1; i++) {
        if(a[i].first > a[i + 1].first && a[i].second < a[i + 1].second) {
            op "Happy Alex" << endl;
            return 0;
        }
    }

    op "Poor Alex" << endl;
}