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
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        string s; char c;
        ip s >> c;
        string ans = "No";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == c) {
                if(i % 2 != 0 && (s.size() - 1 - i)%2 != 0) {
                    ans = "No";
                } else {
                    ans = "Yes";
                    break;
                }
            }
        }

        op ans << endl;
    }
}