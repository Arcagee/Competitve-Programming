#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    string s;
    ip s;
    int n = s.size();
    string k = "ABBA";
    string z = "BAAB";
    int j = 0, cnt = 0;
    string ans = "NO";
    for(int i = 0; i < n;) {
        if(s[i] == k[j] && s[i + 1] == k[j + 1]) {
            i+=2;
            j+=2;
            cnt+=2;
            if(cnt == 4) {
                ans = "YES";
                break;
            }
        } else i++;
    }
    j = 0;
    cnt = 0;
    for(int i = 0; i < n;) {
        if(s[i] == z[j] && s[i + 1] == z[j + 1]) {
            i+=2;
            j+=2;
            cnt+=2;
            if(cnt == 4) {
                ans = "YES";
                break;
            }
        } else i++;
    }

    op ans << endl;
}