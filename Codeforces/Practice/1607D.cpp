/* Author: ankush_kr */
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
        ip n;
        vi a(n);
        string s;
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        ip s;
        vi blue, red;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') blue.pb(a[i]);
            else red.pb(a[i]);
        }

        string ans = "YES";
        sort(blue.begin(), blue.end());
        sort(red.begin(), red.end());
        for(int i = 1, j = 0; i <= blue.size(); i++, j++) {
            if(blue[j] < i) ans = "NO"; 
        }

        for(int i = blue.size() + 1, j = 0; i <= n; i++, j++) {
            if(red[j] > i) ans = "NO"; 
        }

        op ans << endl;
    }
}