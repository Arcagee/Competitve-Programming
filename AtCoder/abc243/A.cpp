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
    // cin >> t;
    while(t--) {
        int v, a, b, c;
        vector<char> s = {'F', 'M', 'T'};
        ip v >> a >> b >> c;
        while(v >= 0) {
        if(v < a) {
            op s[0] << endl;
            break;
        } 
        v -= a;
        if(v < b) {
            op s[1] << endl; break;
        } 
        v -= b;
        if(v < c) {
            op s[2] << endl; break;
        } 
        v -= c;
        }
    }
}