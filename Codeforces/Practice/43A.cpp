#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

signed main(){
    fast
    map<string, int> mp;
    int n;
    ip n;

    for(int i = 0; i < n; i++) {
        string s;
        ip s;
        mp[s]++;
    }
    int comp = -1;
    string ans;
    for(auto x: mp) {
        if(x.second > comp) {
            comp = x.second;
            ans = x.first;
        }
    }

    op ans << endl;
}