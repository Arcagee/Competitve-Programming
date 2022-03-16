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
        vector<int> x(3);
        vector<int> y(3);
        for(int i = 0; i < 3; i++) {
            ip x[i] >> y[i];
        }
        int len = 0;
        if(y[0] == y[1] && y[0] > y[2]) {
            len = abs(x[0] - x[1]);
        } else if (y[0] == y[2] && y[0] > y[1]){
            len = abs(x[0] - x[2]);
        } else if(y[1] == y[2] && y[1] > y[0]) {
            len = abs(x[1] - x[2]);
        }

        op len << endl;
    }
}