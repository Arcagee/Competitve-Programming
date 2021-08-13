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
        int k;
        ip n >> k;
        vector<int> v[n];

        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            v[x - 1].push_back(i);
        }
        vector<int> ans(n, 0);
        vector<int> ele;
        for(int i = 0; i < n; i++) {
            if(v[i].size() >= k) {
                for(int j = 0; j < k; j++) {
                    ele.push_back(v[i][j]);
                }
            } else {
                for(int j = 0; j < v[i].size(); j++) {
                    ele.push_back(v[i][j]);
                }
            }
        }

        int sz = (ele.size() / k) * k;

        for(int i = 0; i < sz; i++) {
            ans[ele[i]] = i % k + 1;
        }

        for(auto x: ans) {
            op x << " ";
        } op endl;
    }
}