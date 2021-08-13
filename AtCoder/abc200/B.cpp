#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, k;
    ip n>>k;
    while(k--) {
        if(n%200 == 0) {
            n /= 200;
        } else {
            string s = to_string(n);
            s.append("200");
            int x = stol(s);
            n = x;
        }
    }
    op n<<endl;
}