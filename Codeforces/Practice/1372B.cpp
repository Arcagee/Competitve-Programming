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
            vector<int> fac;
            int ans = INT64_MAX;
            bool flag = 0;
            for(int i = 2; i <= sqrt(n); i++) {
                if(n % i == 0) {
                    ans = min(ans, n - n/i);
                    flag = 1;
                    op ans << " " << n - ans << endl;
                    break;
                }
            }

            if(flag == 0) {
                op 1 << " " << n - 1 << endl;
            }
    }
}