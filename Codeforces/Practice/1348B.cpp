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
        set<int> a;
        map<int, int> mp; 
        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            a.insert(x);
            mp[x]++;
        }
        if(mp.size() > k) {
            op "-1\n";
            continue;
        }

        vector<int> ans;
        op n * k << endl;
        for(int i = 0; i < n; i++) {
            for(auto x: a) {
                op x << " ";
            }

            for(int j = 0; j < k - a.size(); j++) {
                op 1 << " ";
            }
        } op endl;
    }
}