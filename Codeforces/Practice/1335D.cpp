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
    cin >> t;
    while(t--) {
        vector<string> v(9);
        vector<string> ans(9);
        for(int i = 0; i < 9; i++) {
            ip v[i];
        }

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(v[i][j] == '6') {
                    v[i][j] = '9';
                } 
            }
        }
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                op v[i][j];
            } op endl;
        }
    }
}