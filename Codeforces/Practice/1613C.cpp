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
        int h;
        ip n >> h;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        vi diff;
        for(int i = 1; i < n; i++) {
            diff.pb(a[i] - a[i - 1]);
        } 

        int sum = 0, k = 0, low = 0, high = h, res = 0;
        while(low <= high) {
            k = low + (high - low)/2;
            sum = 0;
            for(int i = 0; i < diff.size(); i++) {
                sum += min(k, diff[i]);
            }
            sum += k;
            if(sum >= h) {
                high = k - 1;
                res = k;
            } else {
                low = k + 1;
            }
        }
        op res << endl;
    }
}