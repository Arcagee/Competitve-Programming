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
 
bool check(vi &a, int n, int total, int sum) {
    bool flag = 0;
    for(int i = 0; i < n + 1; i++) {
        int tempsum = sum;
        if(tempsum - a[i] == total) {
            a[i] = -1;
            flag = 1;
            break;
        }
    }

    if(flag == 0) return false;
    return true;
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        ip n;
        vi a(n + 2);
        for(int i = 0; i < n + 2; i++) {
            ip a[i];
        }

        sort(a.begin(), a.end());

        int total = a[n + 1], sum = 0;
        for(int i = 0; i < n + 1; i++) {
            sum += a[i];
        }

        if(check(a, n, total, sum)) {
            for(int i = 0; i < n + 1; i++) {
                if(a[i] != -1) op a[i] << " ";
            } op endl;
        } else if(sum - a[n] == a[n]) {
            for(int i = 0; i < n; i++) {
                op a[i] << " ";
            } op endl;
        } else {
            op -1 << endl;
        }
    }
}
