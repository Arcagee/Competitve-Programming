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
    map<string, int> mp;
    for(int i = 0; i < n; i++) {
        string s;
        ip s;
        if(mp.find(s) == mp.end()) {
            op "OK" << endl;
            mp[s]++;
        } else {
            op s << mp[s] << endl;
            mp[s]++;
        }
    }

}