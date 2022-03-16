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
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t, n;
    // cin >> t;
    t = 1;
    while(t--) {
        int m;
        ip n;
        vi a(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            ip a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        ip m;
        while(m--) {
            int x, y, cost = 0, tempsum = sum; // x->defense y-> attack
            ip x >> y;
            int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
            if(idx == n) idx--;

            if(a[idx] >= x && idx > 0) {
                int sum1 = tempsum, sum2 = tempsum, cost1 = 0, cost2 = 0;
                cost1 = max(0ll, y - sum1 + a[idx]);
                int val = y - (sum2 - a[idx - 1]);
                if(val < 0) val = 0;
                cost2 = max(0ll, val + (x - a[idx - 1]));
                op min(cost1, cost2) << endl; 
            } else {
                int val = y - (tempsum - a[idx]);
                int val2 = x - a[idx];
                if(val < 0) val = 0;
                if(val2 < 0) val2 = 0;
                cost = max(0ll, val + val2);
                op cost << endl;                           
            }
        }
    }
}