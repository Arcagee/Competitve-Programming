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
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            ip a[i];
            mp[a[i]]++;
        }

        sort(a.rbegin(), a.rend());
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            // if(n - i - mp[a[i]] < 0) continue;
            cnt += 2 * ((n - 1 - i) - (mp[a[i]] - 1));
            mp[a[i]]--;
        } 

        op cnt << endl;
    }
}