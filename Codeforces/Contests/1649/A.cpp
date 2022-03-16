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
        ip n;
        vi a(n);
        int first = -1, last = -1;
        for(int i = 0; i < n; i++) {
            ip a[i];
            if(a[i] == 0 && first == -1) {
                first = i;
            }
            if(a[i] == 0)
                last = i;
        }
        if(last != -1 && first != -1)
            op last - first + 2<< endl;
        else op 0 << endl;
    }
}