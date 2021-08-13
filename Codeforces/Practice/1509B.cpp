#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        string s;
        ip s;
        if(s == "TMT") {
            op "YES" << endl;
            continue;
        }
        bool flag1 = 0, flag2 = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'T' && flag1 == 0 && s[i + 1] != 'M' && s[i + 2] != 'T') {
                op "h" << endl;
                flag1 = 1;
                cnt++;
            } else if(s[i] == 'M' && s[i - 1] != 'T' && s[i + 1] != 'T') {
                op "y" << endl;
                flag1 = 0;
                cnt++;
            }

            if(cnt == 3) {
                op "YES" << endl;
                break;
            }
        }

        if(cnt != 3) op "NO" << endl;
    }
}