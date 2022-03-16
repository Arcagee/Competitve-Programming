/* Author: ankush_kr */
#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>n
#define vb vector<bool>
#define vvi vector<vector<int>>
#define deb(x) cout << #x << '=' << x << endl
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

        vi copy;
        copy = a; sort(copy.begin(), copy.end());
        string ans = "Yes";
        for(int i = 0; i < n ; i++) {
            if(a[i] != copy[i] && a[i] % minele != 0) {
                ans = "No";
                break;
            }
        }

        op ans << endl;
    }
}