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
#define mpi map<int, int>
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        string s;
        ip s;
        n = s.size();
        mpi mp;
        vi pref(n);
        int cnt = 0, maxval = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '-') cnt--;
            if(s[i] == '+') cnt++;

            if(cnt < 0 && mp.find(cnt) == mp.end()) mp[cnt] = i + 1;
            maxval = min(maxval, cnt);
        }

        maxval = abs(maxval);
        int ans = n;
        for(int i = 0; i < maxval; i++) {
            // -(i + 1) is the minimum value needed to satisfy < 0
            // Like for 1 it has to be -2 for 1 to be less than 0
            // for 0 it has to be -1
            ans += mp[-(i + 1)];
        }

        op ans << endl;
    }
}