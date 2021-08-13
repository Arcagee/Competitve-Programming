#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        sort(a.begin(), a.end());

        // what array will we take?
        // 5 -2 4 8 6 5
        // elements can be same. but all cannot.
        // if same, diff 0 in front
        // largest - smallest = greatest.

        int l = 0, r = n - 1;
        vector<int> ans;

        while(l <= r) {
            ans.push_back(a[l]);
            ans.push_back(a[r]);    
            l++;
            r--;
        }
        for(int i = n - 1; i >= 0; --i) {
            op ans[i] << " ";
        }
        op endl;
    }
}