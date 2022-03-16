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
 
bool isSquare(int n) {
    int num = sqrt(n);
    if(num * num == n) return true;
    return false;
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        ip n;
        string ans = "NO";
        if(n % 2 == 0) {
            if(isSquare(n/2)) ans = "YES";
        }

        if(n % 4 == 0) {
            if(isSquare(n/4)) ans = "YES";
        }

        op ans << endl;
    }
}