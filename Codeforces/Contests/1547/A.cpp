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
        int  a1, a2, b1, b2, c1, c2;
        ip a1 >> a2;
        ip b1 >> b2;
        ip c1 >> c2;
        
        int dis = abs(a1 - b1) + abs(a2 - b2);
        if(a1 == b1 && a1 == c1 && c2 > min(a2, b2) && c2 < max(a2, b2) or a2 == b2 && a2 == c2 && c1 > min(a1, b1) && c1 < max(a1, b1)) {
            dis += 2;
        }

        op dis << endl;
    }
}