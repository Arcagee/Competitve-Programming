#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, l;
    ip n>>l;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        ip a[i];
    }
    sort(a.begin(), a.end());
    double distance = 0;
    for(int i = 1; i < n; i++){
        double temp = (a[i] - a[i-1])*1.0;
        distance = max(distance, temp);
    }
    distance /= 2.0;
    double begin_distance = a[0];
    double end_distance = l - a[n-1];
    double ans = max({distance, begin_distance, end_distance});
    op fixed<< setprecision(10) << ans;
}