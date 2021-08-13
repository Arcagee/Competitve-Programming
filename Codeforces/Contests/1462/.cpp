#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) {
            ip a[i];
        }

        vector<int> ans;
        for(int i = 1; i <= n; i+=2) {
            ans.push_back(a[i]);
        }
        vector<int> ans2;
        for(int i = n - 1; i >= 0; i-=2) {
            ans.push_back(a[i]);
        }

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                op ans[i] << " ";
            }
        }
        op endl;
    }
}