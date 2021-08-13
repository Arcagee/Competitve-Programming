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
        vector<int> ele;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            ip a[i];
            mp[a[i]]++;
            if(mp[a[i]] <= 1)
                ele.push_back(a[i]);
        }
        int ans = INT64_MAX;
        for(int i = 0; i < ele.size(); i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(ele[i] == a[j]) {
                    cnt++;
                }
            }

            ans = min(cnt, ans);
        }
        if(ans == n) { 
            op 0 << endl;
            continue;
        } else if(ans == 0) {
            op 1 << endl;
            continue;
        }
        op ans - 1 << endl;
    }
}