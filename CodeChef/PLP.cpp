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
        ip n;
        vi a(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            ip a[i];
            sum += a[i];
        }
        
        int ans = -1, diff = INT32_MAX;
        vi pref(n);
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                pref[i] = a[i];
            } else pref[i] = pref[i - 1] + a[i];
        }
        for(int i = 0; i < n; i++) {
            int temp = sum - pref[i];
            if(abs(temp - pref[i]) < diff) {
                ans = max(pref[i], temp);
                diff = abs(temp - pref[i]);
            }
        }
        op ans << endl;
    }
}