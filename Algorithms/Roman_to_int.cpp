#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    tsukuyomi
    vector<string> strs;
    for(int i = 0; i < 3; i++) {
        string s;
        ip s;
        strs.push_back(s);
    }
    // op 1;
    sort(strs.begin(), strs.end());
    for(auto x: strs) {
        op x << endl;
    }
}