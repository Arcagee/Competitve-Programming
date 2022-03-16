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
 
void rotateRight(vi &a, int i) {
    int x = a[i], b = a[i + 1], c = a[i + 2];
    a[i] = c;
    a[i + 1] = x;
    a[i + 2] = b;
}

signed main() {
    tsukuyomi
    int t, n;
    // cin >> t;
    t= 1;
    while(t--) {
        ip n;
        vi a(n), b(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        for(int i = 0; i < n; i++) {
            ip b[i];
        }

        string ans = "Yes";
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            while(i < n - 2 && a[i] != b[i] && cnt != 2) {
                rotateRight(a, i);
                cnt++;
            }
        }

        for(int i = 0; i < n; i++) {
            op a[i] << " ";
        }
        // op ans << endl;
    }
}