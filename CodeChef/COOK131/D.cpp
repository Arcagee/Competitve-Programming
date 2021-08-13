#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    tsukuyomi
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        sort(a.begin(), a.end());
        int ele = 1;
        for(int i = 0; i < n; i++) {
            if(a[i] == a[i + 1]) {
                ele++;
                continue;
            } break;
        }
        int cnt = ele;
        for(int i = ele; i < n; i++) {
            if(a[i] % (a[i] - a[0]) == a[0]) {
                cnt++;
                continue;
            } break;
        }

        if(cnt == n) {
            op n - ele << endl;
        } else {
            op n << endl;
        }
    }
}