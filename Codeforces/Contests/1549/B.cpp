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
        ip n;
        string a, b;
        ip a >> b;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(b[i] == '1' && a[i] == '0') {
                a[i] = 'x';
                cnt++;
            } else if(b[i] == '1' && a[i - 1] == '1') {
                a[i - 1] = 'x';
                cnt++;
            } else if(a[i + 1] == '1' && b[i] == '1') {
                a[i + 1] = 'x';
                cnt++;
            }
        }
        op cnt << endl;
    }
}