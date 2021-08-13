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
        vector<int> ans;
        op "0\n";
        for(int i = 0; i < n; i++) {
            ans.push_back(i);
            ans.push_back(i + 1);
            for(auto x: ans) {
                op x << " ";
            } op endl;
        }
    }
}