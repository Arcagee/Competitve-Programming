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
    // cin >> t;
    t = 1;
    while(t--) {
        ip n;
        int x = 0;
        while(n--) {
            string s;
            ip s;
            if(s == "X++" || s == "++X") {
                x++;
            } else if(s == "X--" || s == "--X") {
                x--;
            }
        }

        op x << endl;
    }
}