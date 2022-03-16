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
 
void flipBitsRev(string &s, int n) {
    for(int i = 0; i < n; i++) {
        s[i] = (s[i] == '1') ? '0' : '1';
    }
    reverse(s.begin(), s.begin() + n);
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        string a, b;
        ip n >> a >> b;
        int cnt = 0;
        vi ans;
        while(a != b && ans.size() <= n * 3) {
            for(int i = 0; i < n; i++) {
                if(a[i] != b[i]) {
                    ans.pb(i + 1);
                    ans.pb(1);
                    ans.pb(i + 1);
                    flipBitsRev(a, i + 1);
                    flipBitsRev(a, 1);
                    flipBitsRev(a, i + 1);
                }
            }
        }
        op ans.size() << " ";
        for(int i = 0; i < ans.size(); i++) {
            op ans[i] << " ";
        } op endl;
        // op a << endl;
    }
}