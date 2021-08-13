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
        if(n == 1) {
            op 1 << endl;
            continue;
        }

        if(n == 2) {
            op -1 << endl;
            continue;
        }
        int a[n + 1][n + 1];
        int val1 = 1, val2 = n * n;
        bool flag = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(flag == 0) {
                    a[i][j] = val2;
                    val2--;
                    flag = 1;
                } else if(flag == 1) {
                    a[i][j] = val1;
                    val1++;
                    flag = 0;
                }
            }
        }
        swap(a[n - 1][n - 1], a[0][n - 1]);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                op a[i][j] << ' ';
            } op endl;
        }
    }
}