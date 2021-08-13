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
        string s;
        ip s;
        if(s.length() == 1) {
            if(s[0] == 'a') {
                op "YES" << endl;
            } else {
                op "NO" << endl;
            }
            continue;
        }
        string ans = "YES";
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        int cnt = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a') {
                cnt = 1;
                int l = i;
                int r = i;
                int cur = 0;
                while(l <= r && cnt != s.length()) {
                    if(s[l - 1] == alpha[cur] + 1) {
                        l--;
                        cur++;
                        cnt++;
                    } else if(s[r + 1] == alpha[cur] + 1) {
                        r++;
                        cur++;
                        cnt++;
                    } else {
                        ans = "NO";
                        break;
                    }
                }
            }
            if(ans == "NO") break;
        }
        if(cnt == 0) ans = "NO";
        op ans << endl;
    }
}