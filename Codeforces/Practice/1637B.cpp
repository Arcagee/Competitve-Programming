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
        
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                ans += 2;
            } else {
                ans += 1;
            }
        }
        
        for(int i = 0; i < n; i++) {
            int len = 2;
            while(len <= n) {
                int j = i;
                while(j < len) {
                    if(a[j] == 0) {
                        ans += 2;
                    } else {
                    ans += 1;
                    }
                    j++;
                }
                len++;
            }
        }
        
        op ans << endl;
    }
}