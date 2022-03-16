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
        string s;
        ip s;

        int ans = INT_MAX;
        for(int i = 0; i < n - 1; i++) {
            // op (s.substr(i, i + 5) == "abbacca") << endl;
            int cntA = 0, cntB = 0, cntC = 0;
            for(int j = i; j <= min(i + 8, n - 1); j++) {
                if(s[j] == 'a') cntA++;
                if(s[j] == 'b') cntB++;
                if(s[j] == 'c') cntC++;
                if(j == i) continue;
                if(cntA > cntB && cntA > cntC) ans = min(ans, j - i + 1);
            }
        }
        if(ans == INT_MAX) ans = -1;
        op ans << endl;
    }
}