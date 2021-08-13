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
        int N = 1e9 + 7;

        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            mp[x]++;
        }
        int cnt = 0;
        for(auto x: mp) {
            cnt = max(cnt, x.second);
        }
        if(cnt <= 1) {
            op 0 << endl;
            continue;
        }
        int num = n - 2;
        int pro1, pro2;
        if(cnt == 2) {
            pro1 = 2;
        } else if(cnt == n) {
            num = n;
            pro1 = 1;
        } else {
            pro1 = cnt * 2;
        }
        pro2 = num;
        for(int i = num - 1; i > 0; --i) {
            pro2 *= (i);
        }
        // op pro2 << " ";
        op (pro1 * pro2) % N << endl;
    }
}