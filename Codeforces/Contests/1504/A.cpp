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
        int cnt = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a') {
                cnt++;
            }
        }
        if(cnt == s.size()) {
            op "NO" << endl;
            continue;
        }
        string k = s;
        reverse(k.begin(), k.end());
        if(k == s) {
            op "YES" << endl;
            op 'a' << s << endl;
        } else {
            string z = "a";
            string y = k;
            string a = s;
            string b = "a";
            y.append("a");
            z.append(k);
            a.append("a");
            b.append(s);
            if(z != a) {
                op "YES" << endl;
                op a << endl;
            } else if(y != b) {
                op "YES" << endl;
                op b << endl;
            } else {
                op "NO" << endl;;
            }
        }
    }
}