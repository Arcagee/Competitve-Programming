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
        string s;
        ip s;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                cnt++;
            }
        }
        
        if(cnt % 2 == 0 or cnt < 3) {
            if(cnt == 0) {
                op "DRAW" << endl;
                continue;
            }
            op "BOB" << endl;
        } else {
            op "ALICE" << endl;
        }
    }
}