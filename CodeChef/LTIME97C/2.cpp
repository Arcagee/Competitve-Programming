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
        string s;
        ip s;
        string k = "Success";
        if(s[0] != '<' && s[1] != '/' && s[s.size() - 1] != '>' || s.size() <= 3) {
            op "error" << endl;
            continue;
        }
        for(int i = 2; i < s.size() - 1; i++) {
            if((s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' || s[i] >= '0' && s[i] <= '9') == false) {
                k = "error";
            }
        }

        op k << endl;
    }
}