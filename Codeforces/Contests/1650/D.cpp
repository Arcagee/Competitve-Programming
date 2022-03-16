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
 
void rotate(vi &arr, int n) {
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}



signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        ip n;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        vi ans;
        for(int i = n - 1; i >= 0; --i) {
            int cnt = 0;
            while(a[i] != i + 1) {
                cnt++;
                rotate(a, i + 1);
            }
            ans.pb(cnt);
        }

        for(int i = n - 1; i >= 0; --i) {
            op ans[i] << " ";
        } op endl;
    }
}