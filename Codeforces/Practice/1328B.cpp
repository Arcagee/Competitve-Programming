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
        int k;
        ip n >> k;
        int pos1 = 0, pos2 = 0;
        for(int i = n - 1; i >= 1; --i) {
            int num = n - i;
            if(k <= num) {
                pos1 = i;
                pos2 = n - k + 1;
                break;
            }
            k -= num;
        } 

        for(int i = 1; i <= n; i++) {
            if(i == pos1 || i == pos2) {
                op 'b';
            } else {
                op 'a';
            }
        }

        op endl;
    }
}