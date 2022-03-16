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
        multiset<int> s;
        for(int i = 0; i < n; i++) {
            int x; ip x;
            s.insert(x);
        }

        int ans = 0;
        for(int ele : s) {
            auto it = s.find(ele * k);
            if(ele * k == *it) {
                s.erase(it);
            } else ans++;
        }

        op ans << endl;
    }
}