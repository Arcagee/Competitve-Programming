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
        if(n < 2050 || n % 2050 != 0) {
            op "-1" << endl;
        } else {
            int num = n / 2050;
            int sum = 0, m = 0;
            while(num > 0) {
                m = num % 10;
                sum += m;
                num = num/10;
            }

            op sum << endl;
        }
    }
}