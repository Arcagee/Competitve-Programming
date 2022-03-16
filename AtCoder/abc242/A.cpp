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
    t = 1;
    // cin >> t;
    while(t--) {
        int a, b, c, x;
        ip a >> b >> c >> x;
        if(x <= a) {
            op 1 << endl;
        } else if(x >= a + 1 && x <= b) {
            int val = b - a;
            op (double) (c * 1.0 / val * 1.0);
        } else {
            op 0 << endl;
        }
    }
}