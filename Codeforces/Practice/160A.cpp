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
    vector<int> a(n);
    int total = 0;
    for(int i = 0; i < n; i++) {
        ip a[i];
        total += a[i];
    }

    sort(a.begin(), a.end());
    int sum = 0, cnt = 0;
    for(int i = n - 1; i >= 0; i--) {
        sum += a[i];
        if(sum > total/2) {
            cnt++;
            break;
        } else {
            cnt++;
        }
    }

    op cnt << endl;
}