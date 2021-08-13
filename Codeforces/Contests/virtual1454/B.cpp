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
        map<int, int> mp;
        vector<int> index(n + 1);
        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            index[x] = i + 1;
            mp[x]++;
        }
        int ans = -1;     
        for(auto x: mp) {
            if(x.second == 1) {
                ans = index[x.first];
                break;
            }
        }
        op ans << endl;
    }
}