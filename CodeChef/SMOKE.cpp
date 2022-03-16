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
        int x, y;
        ip n >> x >> y;
        int ans = 0;
        int temp1 = n, temp2 = n;
        while(n > 0) {
            if(n >= 100) {
                // cout << "HERE" << endl;
                // cout << n << endl;
                ans += x;
                n -= 100;
            } else {
                n -= 4;
                ans += y;
            }
        }
        int ans2 = 0, ans3 = 0;
        while(temp1 > 0) {
            ans2 += x;
            temp1 -= 100;
        }
        
        while(temp2 > 0) {
            ans3 += y;
            temp2 -= 4;
        }
        op min({ans, ans2, ans3}) << endl;
    }
}