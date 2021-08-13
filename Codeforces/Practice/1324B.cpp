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
        vector<int> a(n);
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++) {
            ip a[i];
            mp[a[i]].push_back(i + 1);
        }
        // We can delete elements in whatever way we like.
        string ans = "NO";
        for(auto x: mp) {
            if(x.second.size() >= 3) {
                ans = "YES";
                break;
            }
        }

        for(auto x: mp) {
            if(x.second.size() == 2 && (x.second[1] - x.second[0] >= 2)) {
                ans = "YES";
                break;
            }
        }

        op ans << endl;
    }
}