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
        if(a[0] == 0 && a[n - 1] == 0) {
            op "0\n";
            continue;
        }
        int high = n - 1, low = n - 2;
        while(low >= 0) {
            if(a[high] == 0) {
                high--;
                continue;
            }
            if(a[high] >= a[low]) {
                a[high] -= a[low];
                a[low] = 0;
                low--;
            } else {
                a[high] = 0;
                a[low] = a[low] - a[high];
                high--;
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] > 0) cnt+=a[i];
        }
        
        (cnt == 0) ? op 1 : op cnt; op endl;
    }
}