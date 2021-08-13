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
        int m;
        ip n >> m;
        string s[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                s[i][j] = '0';
            }
        }
        int cnt = 0, zeros = n - 2;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || i == n - 1) {
                    if(j % 2 == 0) {
                        s[i][j] = '1';
                    }
                } else {
                    if(j == 0 or j == m - 1) {
                        if(i % 2 == 0 && i - 1 != 0 && i + 1 != n - 1) {
                            s[i][j] = '1';
                        }
                    }
                } 
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                op s[i][j];
            } op endl;
        }

        op endl;
    }
}