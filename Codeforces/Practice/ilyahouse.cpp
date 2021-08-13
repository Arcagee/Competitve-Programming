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

    for(int i = 0; i < n; i++) {
        ip a[i];
    }
    int ans1 = 0, ans2 = 0;
    for(int i = 0, j = n - 1; i < j;) {
        if(a[i] != a[j]) {
            ans1 = j - i;
            break;
        } else {
            i++;
        }
    }

    for(int i = 0, j = n - 1; i < j;) {
        if(a[i] != a[j]) {
            ans2 = j - i;
            break;
        } else {
            j--;
        }
    }

    op max(ans1, ans2) << endl;
}