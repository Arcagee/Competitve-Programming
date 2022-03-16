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
        ip n;
        vi a(n), b(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        for(int i = 0; i < n; i++) {
            ip b[i];
        }
        vi pointsA(2);
        vi pointsB(2);

        pointsA[0] = a[0], pointsA[1] = a[n - 1];
        pointsB[0] = b[0], pointsB[1] = b[n - 1];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans1 = abs(pointsA[0] - pointsB[0]) + abs(pointsA[1] - pointsB[1]);
        int ans2 = abs(pointsA[1] - pointsB[0]) + abs(pointsA[0] - pointsB[1]);
        int ans = 0;
        for(int i = 0; i < 2; i++) {
            int idx = lower_bound(b.begin(), b.end(), pointsA[i]) - b.begin();
            if(idx == n) idx--;
            // deb(idx);
            if(b[idx] == pointsB[0]) {
                pointsB[0] = INT16_MAX;
            } else if(b[idx] == pointsB[1]) {
                pointsB[1] = INT16_MAX;
            }
            ans += abs(pointsA[i] - b[idx]);
        }
        // deb(ans);

        for(int i = 0; i < 2; i++) {
            if(pointsB[i] != INT16_MAX) {
                int idx = lower_bound(a.begin(), a.end(), pointsB[i]) - a.begin();
                if(idx == n) idx--;
                // deb(idx);
                ans += abs(pointsB[i] - a[idx]);
            }
        }
        // deb(ans);

        op min({ans1, ans2, ans}) << endl;
    }
}