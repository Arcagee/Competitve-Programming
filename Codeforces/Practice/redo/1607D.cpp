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
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        string s; ip s;
        vi red, blue;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') blue.pb(a[i]);
            else red.pb(a[i]);
        }

        sort(all(blue)); sort(all(red));

        int ele = 1;
        string ans = "YES";
        for(int i = 0; i < blue.size(); i++) {
            if(blue[i] < ele) ans = "NO";
            ele++;
        }

        for(int i = 0; i < red.size(); i++) {
            if(red[i] > ele) ans = "NO";
            ele++;
        }

        op ans << endl;
    }
}