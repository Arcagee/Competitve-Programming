#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n"
#define int long long
void solve(){
    int n, h;
    ip n >> h;
    string s;
    ip s;
    int ans = 0, cnt = 0;
    bool flag = 0, flag1 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') {
            ans += 1;
            if(ans >= h) {
                op "YES" << endl;
                flag = 1;
                break;
            }
        } else if(s[i] == '1' && ans < h && ans > 0) {
            int temp = (h - ans) * 2;
            if(temp < h) {
                h = temp;
            }
            ans = 0;
        }
    }

    if(flag == 0) op "NO" << endl;

}

signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        solve();
    }
}