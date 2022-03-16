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
        string s;
        ip s;
        n = s.size();
        int suf1 = 0, suf0 = 0;

        for(int i = 0; i < n; i++) {
            suf1 += (s[i] == '1');
            suf0 += (s[i] == '0');
        }

        int ans = min(suf1, suf0);
        int pref1 = 0, pref0 = 0;
        for(int i = 0; i < n; i++) {
            pref0 += (s[i] == '0');
            suf0 -= (s[i] == '0');
            pref1 += (s[i] == '1');
            suf1 -= (s[i] == '1');

            ans = min(ans, pref1 + suf0); // 000...1
            ans = min(ans, pref0 + suf1); // 1...00
        }

        op ans << endl;
    }
}