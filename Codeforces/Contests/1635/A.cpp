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
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
        	ip a[i];
        }
        int ans = a[0];
        for(int i = 1; i < n; i++) {
        	ans |= a[i];
        }
        
        op ans << endl;
    }
}