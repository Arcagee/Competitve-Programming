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

int calcDistance(map<int, vi> mp) {
    int res = 0;
    for(auto ele : mp) {
        int sz = ele.second.size();
        sort(ele.second.begin(), ele.second.end());
        vi pref(sz);
        for(int i = 0; i < sz; i++) {
            if(i == 0) pref[i] = ele.second[i];
            else {
                pref[i] = pref[i - 1] + ele.second[i];
            }
        }

        for(int i = 0; i < sz - 1; i++) {
            res += (pref[sz - 1] - pref[i] - ele.second[i] * (sz - i - 1));
        } 
    }
    return res;
}

signed main() {
    tsukuyomi
    int t, n;
    // cin >> t;
    t = 1;
    while(t--) {
        int m;
        ip n >> m;
        map<int, vector<int>> mpx, mpy;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int x; ip x;
                mpx[x].pb(i);
                mpy[x].pb(j);
            }
        }
        int x = calcDistance(mpx), y = calcDistance(mpy);
        op x + y << endl;
    }
}