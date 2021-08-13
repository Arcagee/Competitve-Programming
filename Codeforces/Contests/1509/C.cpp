#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int t, n;
        ip n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        sort(a.begin(), a.end());
        vector<int> b;
        for(int i = n/2; i < n; i++) {
            b.push_back(a[i]);
        }

        for(int i = n/2 - 1; i >= 0; i--) {
            b.push_back(a[i]);
        }

        // for(int i = 0; i < n; i++) {
        //     op b[i] << " ";
        // }
        int sum = 0;
        for(int i = 1; i <= n; i++) {
            int maxi = 0;
            int mini = INT32_MAX;
            for(int j = 0; j < i; j++) {
                mini = min(mini, a[j]);
                maxi = max(maxi, a[j]);
            }
            sum += (maxi - mini);
        }

        op sum << endl;

}