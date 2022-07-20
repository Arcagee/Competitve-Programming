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
    int t = 1, n;
    cin >> t;
    while(t--) {
        ip n;
        vi a(n);
        int sum = 0;
        mpii mp;
        for(int i = 0; i < n; i++) {
            ip a[i];
            sum += a[i];
            mp[a[i]]++;
        }
        // deb(sum);
        // op 2 * sum/n << endl;
        if(sum * 2 % n != 0) {
            op 0 << endl;
            continue;
        } else {
            int newSum = sum * 2/n;
            int ans = 0;
            // deb(newSum);
            for(int i = 0; i < n; i++) {
                int val = a[i];
                int par = newSum - val;
                if(mp[par]) {
                    mp[val]--;
                    ans += mp[par];
                } 
            }
            op ans << endl;
        }
    }
}