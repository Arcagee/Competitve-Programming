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
        string s, k;
        ip s >> k;
        n = s.size();
        string res = "NO";
        for(int i = 0; i < n; i++) {
            if(s[i] == k[0]) {
                string ans;
                for(int j = i; j < n; j++) {
                    ans += s[j];
                    string ansi = ans;
                    if(ansi == k) {
                        res = "YES";
                        break;
                    }
                    for(int r = j - 1; r >= 0; --r) {
                        ansi += s[r];
                        if(ansi == k) {
                            res = "YES";
                            break;
                        }
                    }
                    if(res == "YES") break;
                }
            }
            if(res == "YES") break;
        }

        op res << endl;
    }
}