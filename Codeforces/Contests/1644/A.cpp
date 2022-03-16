#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
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
        string s;
        ip s;
        vector<bool> key(3, 0);
        string ans = "YES";
        for(int i = 0; i < 6; i++) {
            if(s[i] == 'r') {
                key[0] = 1;
            } else if(s[i] == 'g') {
                key[1] = 1;
            } else if(s[i] == 'b') {
                key[2] = 1;
            } else if(s[i] == 'R' && key[0] != 1) {
                ans = "NO";
            } else if(s[i] == 'G' && key[1] != 1) {
                ans = "NO";
            } else if(s[i] == 'B' && key[2] != 1) {
                ans = "NO";
            } 
        }

        op ans << endl;
    }
}