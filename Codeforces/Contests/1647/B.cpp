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
#define vpii vector<pair<int, int>>
#define mpii map<int, int>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define deb(x) cout << #x << ' = ' << x << endl
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        int m;
        ip n >> m;
        int a[n][m];

        for(int i = 0; i < n; i++) {
            string s;
            ip s;
            for(int j = 0; j < m; j++) {
                if(s[j] == '1') {
                    a[i][j] = 1;
                } 
                else a[i][j] = 0;
            }
        }
        
        string ans = "Yes";
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < m - 1; j++) {
                int sum = 0;
                sum += a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
                if(sum == 3) ans = "No";
            }
        }

        op ans << endl;
    }
}