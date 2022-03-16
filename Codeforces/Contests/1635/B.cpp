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
        
        int mid = (n - 1)/2;
        int cnt = 0;
        for(int i = 1; i < n - 1; i++) {
            if(a[i] > a[i - 1] && a[i] > a[i + 1]) {
                if(i + 2 < n) 
                    a[i + 1] = max(a[i], a[i + 2]);
                else
                    a[i + 1] = a[i];
                
                cnt++;
            }
        }
        op cnt << endl;
        for (int i = 0; i < n; ++i) {
            op a[i] << " ";
        } op endl;
    }
}