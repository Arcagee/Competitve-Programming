#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define MOD 1000000007
 
signed main() {
    tsukuyomi    
    int t, n;
    cin >> t;
    while(t--) {
        int n;
        string s;
        vector<int> v;
        ip n >> s;
        if(s[0] == '0' || s[1] == '0' || s[n] == '0') {
            op "NO" << endl;
        } else {
            v.pb(0);
            int var = 1;
            for(int i = 2; i < s.length()-1; i++) {
                if(s[i] != '0') {
                    v.pb(var);
                    var= i;
                } else {
                    v.pb(i);
                }
            }
            v.pb(var);
            op "YES" << endl;
            for(int i = 0; i < v.size(); i++) {
                op v[i] << " ";
            }
            op endl;
        }
    }
}