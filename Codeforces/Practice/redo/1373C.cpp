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
#define deb(x) cout << #x << '=' << x << endl
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        string s;
        ip s;
        n = s.size();
        int res = 0;
        for(int i = 0; i >= 0; i++) {
            int curr = i;
            bool ok = true;
            for(int j = 0; j < n; j++) {
                res += 1;
                if(s[j] == '+') 
                    curr += 1;
                else 
                    curr -= 1;
                
                if(curr < 0) {
                    ok = false;
                    break;
                }
            }
            deb(res);
            if(ok)
                break;
        }
 
        op res << endl;
    }
}