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
        int a, b;
        ip n >> a >> b;
        if(a == 1) {
            if((n - 1)%b != 0) {
                op "No" << endl;
        } else {
            op "Yes" << endl;
        }
        continue;
        } 
        bool flag = 0;
        int i = 1;
        while(i <= n) {
            if(((n - i) % b) == 0) {
                flag = 1;
                op "Yes" << endl;
                break;
            } else {
                i *= a;
            }
        }
        if(flag == 0) op "No" << endl;
}
}