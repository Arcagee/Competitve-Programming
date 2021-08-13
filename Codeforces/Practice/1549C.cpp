#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    tsukuyomi
    int m, n;
    ip n >> m;
    map<int, int> mp;
    int cnt = 0;
    for(int i = 0; i < m; i++) {
        int a, b;
        ip a >> b;
        mp[min(a, b)]++;
        if(mp[min(a, b)] == 1) {
            cnt++;
        }
    }

    int q;
    ip q;
    // cnt = 0;
    for(int i = 0; i < q; i++) {
        int x;
        ip x;
        if(x == 1) {
            int a, b;
            ip a >> b;
            mp[min(a, b)]++;
            if(mp[min(a, b)] == 1) {
                cnt++;
            }
        } 

        if(x == 2) {
            int a, b;
            ip a >> b;
            mp[min(a, b)]--;
            if(mp[min(a, b)] == 0) {
                cnt--;
            }
        }

        if(x == 3) {
            op n - cnt << endl;
        }
    }
}