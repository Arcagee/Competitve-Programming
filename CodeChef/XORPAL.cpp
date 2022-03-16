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
        ip n;
        string s;
        ip s;
        vector<int> count(2, 0);
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                count[1]++;
            } else {
                count[0]++;
            }
        }
        
        string ans = "YES";
        if(n % 2 == 0 && count[1] > 0 && count[0] > 0) {
            if(count[1] == count[0]) {
                ans = "YES";
            } else if(count[1] % 2 != 0 || count[0] % 2 != 0) {
                ans = "NO";
            } 
        } 
        
        cout << ans << endl;
    }
}