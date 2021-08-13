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

        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        int ans = 0;

        bool flag = 0;
        int pt = 0, cnt = 0;;

        int i = n - 1;

        while(i - 1>= 0) {
            if(a[i] > a[i - 1]) break;
            i--;
        }

        while(i - 1 >= 0) {
            if(a[i] < a[i - 1]) break;
            i--;
        }
        op i << endl;        
    }
}