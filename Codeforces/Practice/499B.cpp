#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, m;
    ip n >> m;

    map<string, string> mp;

    for(int i = 0; i < m; i++) {
        string a, b;
        ip a >> b;
        mp.insert({a, b});
    }

    vector<string> text(n);

    for(int i = 0; i < n; i++) {
        ip text[i];
    }

    for(int i = 0; i < n; i++) {
        if(text[i].length() <= mp[text[i]].length()) {
            op text[i] << " ";
        } else {
            op mp[text[i]] << " ";
        }
    }
}