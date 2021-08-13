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
        ip n;
        string s;
        ip s;
        if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0' or s[n - 1] == '0' && s[n - 2] == '2' && s[n - 3] == '0' && s[n - 4] == '2') {
            op "YES" << endl;
            continue;
        }

        if(s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0') {
            op "YES" << endl;
            continue;
        } 

        if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0') {
            op "YES" << endl;
            continue;
        }

        if(s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0') {
            op "YES" << endl;
            continue;
        } else {
            op "NO" << endl;
        }
    }
}