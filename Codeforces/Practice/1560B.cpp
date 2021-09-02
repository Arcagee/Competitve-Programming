#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define MOD 1000000007
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int a, b, c;
        ip a >> b >> c;
        int size = abs(a - b) * 2;
        if(a > size || b > size || c > size) {
            op -1 << endl;
        } else {
            int diff = abs(a - b);
            if(c + diff > size) {
                op c - diff << endl;
            } else {
                op c + diff << endl;
            }
        }
    }
}