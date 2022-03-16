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
        int x, y;
        ip x >> y;
        int a = 10, b = 10;
        string ans;
        bool flag = 0;
        while(x > 0) {
            if(y % b - x % a < 0) {
                b *= 10;
            } else if(y % b - x % a <= 10) {
                ans += to_string(y % b - x % a);
                x /= a; y /= b;
                b = 10;
            }
        }
        while(x > 0) {
            ans += to_string(x%10);
            x /= 10;
        }


        op ans << endl;
    }
}