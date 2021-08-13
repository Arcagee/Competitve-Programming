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
        n = stoi(s);
        if((n + 1) % 10 == 0) {
            op (n + 1) / 10 << endl;
            continue;
        }
        string k = s.substr(0, s.size() - 1);
        if(s.size() == 1) {
            op 0 << endl;
        } else {
            op k << endl;
        }
    }
}