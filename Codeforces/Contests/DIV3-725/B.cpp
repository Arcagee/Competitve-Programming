#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        int sum = 0;

        for(int i = 0; i < n; i++) {
            ip a[i];
            sum += a[i];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] > sum/n) {
                cnt++;
            }
        }

        if(sum % n == 0) {
            op cnt << endl;            
        } else {
            op -1 << endl;
        }
    }
}