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
        vector<int> odd, even;
        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            if(x % 2 == 0) {
                even.pb(x);
            } else odd.pb(x);
        }
        
        string ans = "YES";        
        for(int i = 1; i < odd.size(); i++) {
            if(odd[i] < odd[i - 1]) ans = "NO";
        }
        
        for(int i = 1; i < even.size(); i++) {
            if(even[i] < even[i - 1]) ans = "NO";
        }
        
        op ans << endl;
    }
}