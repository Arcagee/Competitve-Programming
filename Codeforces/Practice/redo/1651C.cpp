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
#define deb(x) cout << #x << " = " << x << endl
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        ip n;
        vi a(n), b(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        for(int i = 0; i < n; i++) {
            ip b[i];
        }

        int mod = 1e12 + 1;

        // case1
        int ans1 = abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]);
        
        // case2
        int ans2 = abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[0]);
        
        // case3
        int ans3 = abs(a[0] - b[n - 1]);
        int val1 = mod, val2 = mod;
        for(int i = 1; i < n - 1; i++) {
            val1 = min(val1, abs(a[n - 1] - b[i]));
        }

        for(int i = 1; i < n - 1; i++) {
            val2 = min(val2, abs(a[i] - b[0]));
        }
        ans3 += (val1 + val2);

        //case4
        int ans4 = abs(a[n - 1] - b[0]);
        val1 = mod, val2 = mod;
        for(int i = 1; i < n - 1; i++) {
            val1 = min(val1, abs(a[0] - b[i]));
        }

        for(int i = 1; i < n - 1; i++) {
            val2 = min(val2, abs(a[i] - b[n - 1]));
        }
        
        ans4 += (val1 + val2);

        // case5
        int ans5 = abs(a[0] - b[0]);
        val1 = mod, val2 = mod;
        for(int i = 0; i < n; i++) {
            val1 = min(val1, abs(a[n - 1] - b[i]));
        }

        for(int i = 0; i < n; i++) {
            val2 = min(val2, abs(a[i] - b[n - 1]));
        }
        ans5 += (val1 + val2);
        
        // case6
        int ans6 = abs(a[n - 1] - b[n - 1]);
        val1 = mod, val2 = mod;
        for(int i = 0; i < n; i++) {
            val1 = min(val1, abs(a[0] - b[i]));
        }

        for(int i = 0; i < n; i++) {
            val2 = min(val2, abs(a[i] - b[0]));
        }
        ans6 += (val1 + val2);

        // case7
        int ans7 = 0;
        val1 = mod, val2 = mod;
        int val3 = mod, val4 = mod;
        for(int i = 1; i < n - 1; i++) {
            val1 = min(val1, abs(a[0] - b[i]));
        }

        for(int i = 1; i < n - 1; i++) {
            val2 = min(val2, abs(a[n - 1] - b[i]));
        }

        for(int i = 1; i < n - 1; i++) {
            val3 = min(val3, abs(a[i] - b[0]));
        }

        for(int i = 1; i < n - 1; i++) {
            val4 = min(val4, abs(a[i] - b[n - 1]));
        }

        ans7 += (val1 + val2 + val3 + val4);

        op min({ans1, ans2, ans3, ans4, ans5, ans6, ans7}) << endl;
    }
}