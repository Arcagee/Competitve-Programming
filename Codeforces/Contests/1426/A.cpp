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
        int x;
        ip n >> x;
        int cnt = 1;
        if(n <= 2) {
            op cnt << endl;
            continue;
        }
        int k = 2;
        while(k < n) {
            k += x;
            cnt++;
        }

        op cnt << endl;
    }
}