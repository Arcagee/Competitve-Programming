#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast

    int n;
    ip n;
    string s;
    ip s;

    int len = s.size();
    int cnt = 0;
    string ans;
    bool flag = 1;
    for(int i = 0; i < len - 1; i++) {
        if(s[i] != s[i + 1]) {
            flag = 0;
            cnt++;
            ans+=s[i];
            ans+=s[i+1];
            break;
        } else {
            cnt = 0;
            continue;
        }
    }

    if(flag == 1) {
        op "NO" << endl;
    } else {
        op "YES" << endl << ans;
    }
}