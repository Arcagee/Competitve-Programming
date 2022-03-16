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
    // cin >> t; 
    t = 1;
    while(t--) {
        string s;
        ip n >> s;
        string ans;
        for(int i = 0; i < n; i++) {
            if(i + 1 < n && s[i] == 'B' && s[i + 1] == 'A') {
                swap(s[i], s[i + 1]);
            } else if(i + 1 < n && s[i] == 'B' && s[i + 1] == 'B') {
                s[i] = 'A';
                s.erase(s.begin() + i + 1);
            } 
        }

        op s << endl;
    }
}