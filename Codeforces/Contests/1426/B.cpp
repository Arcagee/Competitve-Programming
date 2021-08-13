#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    tsukuyomi
    int t, n;
    cin>>t;
    while(t--){
        int m;
        ip n >> m;
        string ans = "NO";
        for(int i = 0; i < n; i++) {
            int ul, ur, bl, br;
            ip ul >> ur >> bl >> br;
            if(ur == bl) {
                ans = "YES";
            }
        }


        if(m % 2 != 0) {
            op "NO" << endl;
            continue;
        }

        op ans << endl;
    }
}