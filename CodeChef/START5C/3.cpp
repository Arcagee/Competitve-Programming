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
        map<string, int> mp;

        for(int i = 0; i < n; i++) {
            int a; string s;
            ip s >> a;
            mp[s]+=a;
        }

        for(int i = 0; i < n; i++) {
            int a; string s;
            ip s >> a;
            mp[s]+=a;
        }

        for(int i = 0; i < n; i++) {
            int a; string s;
            ip s >> a;
            mp[s]+=a;
        }
        vector<int> ans;
        for(auto &x: mp) {
            ans.push_back(x.second);
        }

        sort(ans.begin(), ans.end());

        for(auto x: ans) {
            op x << " ";
        } op endl;
    }
}