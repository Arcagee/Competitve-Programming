#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, q;
    string s;
    ip n;
    ip s;
    ip q;
    while(q--) {
        int a, b, c;
        ip a >> b >> c;
        string ans = s;
        if(a == 2) {
            for(int i = n - 1; i >= 0; i++) {
                if(i == b - 1|| i == c - 1) continue;
                else {
                    ans[i] = s[i];
                }
            }

            for(int i = n; i < s.size(); i++) {
                if(i == b - 1 || i == c - 1) continue;
                else {
                    ans[i] = s[i];
                }
            }
            op ans << endl;
        }
    }
}