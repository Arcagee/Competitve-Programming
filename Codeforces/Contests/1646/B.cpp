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
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        sort(a.begin(), a.end());
        int lim;
        lim = n/2;

        int sumRed = 0, sumBlue = 0, cntRed = 0, cntBlue = 0;
        for(int i = n - 1; i > lim; --i) {
            sumRed += a[i];
            cntRed++;
        }
        // op sumRed << " ";
        for(int i = 0; i <= lim; i++) {
            while(cntBlue <= cntRed) {
                sumBlue += a[i];
                cntBlue++;
                i++;
            }
        }
        // op sumBlue << " ";
        (sumRed > sumBlue) ? op "YES" : op "NO";
        op endl;
    }
}