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
        char c;
        ip n >> c;
        string s;
        ip s;
        vi idx;
        bool ans = 0, even = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == c) {
                idx.pb(i + 1);
            }
            if(s[i] != c) {
                ans = 1;
            }
        }
        int index = -1;
        if(ans == 1 && idx.size() > 0) {
            for(int i = n; i >= 2; --i) {
                bool flag = 0;
                for(auto x : idx) {
                    if(x % i != 0) {
                        flag = 1;
                    }
                }
                if(flag == 0) {
                    index = i;
                    break;
                }
            }
        }
        if(ans == 0) {
            op "0\n";
            continue;
        } else {
            // deb(index);
            if(index != -1) {
                op 1 << endl << index << endl;
                continue;
            }
            if(idx.size() + 1 == n) {
                for(int i = 0; i < n; i++) {
                    if(s[i] != c) {
                        op 1 << endl;
                        if(i == 0 ) {
                            op 2 << endl;
                            break;
                        }
                        op i << endl;
                        break; 
                    }
                } continue;
            } else if(s[n - 1] != c && s.size() > 1) {
                op 2 << endl << n << " " << n - 1 << endl;
            } else {
                op 1 << endl << n << endl;
            }
        }
    }
}