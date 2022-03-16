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
        int k;
        ip n >> k;
        vector<int> a;
        for(int i = 0; i < n; i++) {
        	a.pb(i + 1);
        }
        int cnt = 0 ;
        if(n - k == 1) {
        	swap(a[0], a[n - 1]);
            for(int i = 0; i < n; i++) {
                op a[i] << " ";
            }
            continue;
        }
        if(n != k)
            swap(a[0], a[n - 1]);
        for(int i = 0; i < n; i++) {
        	if(cnt < k) {
        		cnt++;
        	} else {
                if(i + 1 < n)
        		    swap(a[i], a[i + 1]);
        	}
        }
        
        for(int i = 0; i < n; i++) {
        	op a[i] << " ";
        } op endl;
    }
}