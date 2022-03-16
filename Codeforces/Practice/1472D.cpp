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
#define deb(x) cout << #x << " x " << x << endl
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        vector<string> ans = {"Alice", "Bob", "Tie"};
        ip n;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        sort(all(a));

        int alice = 0, bob = 0;
        bool turn = 0;
        for(int i = n - 1; i >= 0; --i) {
            if(turn == 0) {
                turn = 1;
                if(a[i] % 2 == 0)
                    alice += a[i];
            } else if(turn == 1) {
                turn = 0;
                if(a[i] % 2 != 0)
                    bob += a[i];
            }
        }

        if(alice > bob) {
            op ans[0] << endl;
        } else if(bob > alice) {
            op ans[1] << endl;
        } else {
            op ans[2] << endl;
        }
    }
}