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
        int k;
        ip n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        vector<int> b = a;
        sort(b.begin(), b.end());
        int cnt = 0;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] > a[i + 1]) {
                cnt+=2;
                i++;
            }
        }

        if(cnt <= k) {
            op "Yes" << endl;
        } else {
            op "No" << endl;
        }
    }
}