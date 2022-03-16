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
        vi a(n);
        int minele = INT32_MAX;
        for(int i = 0; i < n; i++) {
            ip a[i];
            minele = min(minele, a[i]);
        }

        vector<pair<int, int>> fixed;
        for(int i = 0; i < n; i++) {
            if(a[i] % minele != 0) fixed.pb({a[i], i});
        }

        sort(a.begin(), a.end());
        string ans = "Yes";
        for(int i = 0; i < fixed.size(); i++) {
            if(fixed[i].first != a[fixed[i].second]) {
                ans = "No";
                break;
            }
        }

        op ans << endl;
    }
}