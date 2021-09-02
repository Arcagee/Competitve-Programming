#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
// #define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define MOD 1000000007

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int k;
        ip k;
        int l = ceil(sqrt(k));
        int x = l - 1;
        int diff = k - (x * x);
        int row = min(l, diff);
        // int comp = 0;
        int col = l - max(diff - l, 0);
        op row << " " << col << endl;
    }
}