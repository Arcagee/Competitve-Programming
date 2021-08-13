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
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        
        sort(a.begin(), a.end());

        int res = 0, cnt = 0, ans = 0;
        for(int sum = 2; sum <= 2 * n; sum++) {
            int i = 0, j = n - 1, res = 0;
            cnt = 0;
            while(i < j) {
                res = a[i] + a[j];
                if(res == sum) {
                    cnt++;
                    i++;
                    j--;
                    continue;
                } 
                if(res < sum) i++;
                else j--;
            }
            ans = max(cnt, ans);
        }

        op ans << endl;
    }
}