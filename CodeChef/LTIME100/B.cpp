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
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        ip n;
        if(n > 2) {
            op "NO" << endl;
            continue;
        }
        op "YES" << endl;
        for(int i = 1; i <= n/2; i++) {
            if(i == n/2) {
                op n/2 + 2;
                continue;
            }
            op i << " ";
        } op endl;
    }
}