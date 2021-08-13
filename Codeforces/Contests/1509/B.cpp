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
        string s;
        ip s;
        int tcnt = 0, mcnt = 0;
        for(int i = 0; i < n; i++) {
            (s[i] == 'T') ? tcnt++ : mcnt++;
        }

        if(tcnt != 2 * mcnt) {
            op "NO" << endl;
            continue;
        } else {
            int cnt = 0;
            bool flag = 0;
            for(int i = 0; i < n; i++) {
                if(s[i] == 'T') {
                    cnt++;
                } else {
                    if(cnt > 0) {
                        cnt--;
                    } else {
                        flag = 1;
                        op "NO" << endl;
                        break;
                    }
                }
            }
            if(flag == 0) {
                cnt = 0;
                for(int i = n - 1; i >= 0; i--) {
                    if(s[i] == 'T') {
                        cnt++;
                    } else {
                        if(cnt > 0) {
                            cnt--;
                        } else {
                            flag = 1;
                            op "NO" << endl;
                            break;
                        }
                    }
                }

                if(flag == 0) {
                    op "YES" << endl;
                }
            }
        }
    }
}