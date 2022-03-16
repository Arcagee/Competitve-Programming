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
 
bool isNotSquare(int n) {
    int num = sqrt(n);
    if(num * num == n) return false;
    return true;
}

bool isNotCube(int n) {
    int num = cbrt(n);
    if(num * num * num == n) return false;
    return true; 
}
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        ip n;
        if(n <= 10) {
            op 1 << endl << n << endl;
        } else {
            if(n % 2 == 0) {
                vi ans; int val;
                while(n % 2 == 0) {
                    n /= 2;
                    val = n;
                    ans.pb(2);
                }

                if(val != n) ans.pb(val);
                op ans.size() << endl;
                for(int i = 0; i < ans.size(); i++) {
                    op ans[i] << " ";
                } op endl;
            } else {
                if(isNotSquare(n) && isNotCube(n)) op 1 << endl << n << endl;
            }
        }
    }
}