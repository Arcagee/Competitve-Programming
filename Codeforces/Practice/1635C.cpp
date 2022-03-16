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
 
bool isSorted(vi a) {
    int n = a.size();
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (a[n - 2] > a[n - 1]) {
            cout << -1 << endl;
        } else {
            if (a[n - 1] < 0) {
                if (is_sorted(a.begin(), a.end())) {
                    cout << 0 << endl;
                } else {
                    cout << -1 << endl;
                }
            } else {
                cout << n - 2 << endl;
                for (int i = 1; i <= n - 2; ++i) {
                    cout << i << ' ' << n - 1 << ' ' << n << endl;
                }
            }
        }
    }
}