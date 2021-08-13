#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

string ans(string s) {
    string res = "Success";
    if(s.size() <= 3) {
        res = "error";
    }
    if(s[0] != '<') {
        res = "error";
    }

    if(s[1] != '/') {
        res = "error";
    }

    if(s[s.size() - 1] != '>') {
        res = "error";
    }
    for(int i = 2; i < s.size() - 1; i++) {
        if(!(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')) {
            res = "error";
        }
    }

    return res;
}

signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        string s;
        ip s;
        string res = ans(s);
        op res << endl;
    }
}