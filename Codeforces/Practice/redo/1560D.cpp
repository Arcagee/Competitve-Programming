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
#define vpii vector<pair<int, int>>
#define mpii map<int, int>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define deb(x) cout << #x << " = " << x << endl
#define MOD 1000000007


signed main() {
    tsukuyomi

    // Precomputation
    vector<string> power;
    for(int i = 0; i <= 60; i++) {
        int num = pow(2, i);
        power.pb(to_string(num));
    }

    int t = 1, n;
    cin >> t;
    while(t--) {
        // We need to find the part which is most coinciding with a power of 2
        string s; ip s;
        int ans = INT32_MAX;
        for(int i = 0; i < power.size(); i++) {
            int cnt = 0, j = 0, k = 0;
            while(k < s.size() && j < power.size()) {
                if(s[k] != power[i][j]) {
                    k++;
                    cnt++;
                } else {
                    j++; k++;
                }
            }
            cnt += power[i].size() - j;
            ans = min(cnt, ans);
        }

        op ans << endl;
    }
}