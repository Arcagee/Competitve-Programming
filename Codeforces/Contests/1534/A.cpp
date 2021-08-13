#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    char comp[50][50];
    char comp1[50][50];
    bool flag = 0;
    for(int i = 0; i < 50; i++) {
        if(i % 2 == 0) flag = 1;
        else flag = 0;
        for(int j = 0; j < 50; j++) {
            if(flag == 1) {
                if(j % 2 == 0) comp[i][j] = 'R';
                else comp[i][j] = 'W';
            } else {
                if(j % 2 == 0) comp[i][j] = 'W';
                else comp[i][j] = 'R';
            }
        }
    }
    flag = 0;
    for(int i = 0; i < 50; i++) {
        if(i % 2 == 0) flag = 1;
        else flag = 0;
        for(int j = 0; j < 50; j++) {
            if(flag == 1) {
                if(j % 2 == 0) comp1[i][j] = 'W';
                else comp1[i][j] = 'R';
            } else {
                if(j % 2 == 0) comp1[i][j] = 'R';
                else comp1[i][j] = 'W';
            }
        }
    }
    
    int t, n;
    cin>>t;
    while(t--){
        int m;
        ip n >> m;
        
        char s[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ip s[i][j];
            }
        }
        bool flag2 = 0, flag3 = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(s[i][j] == '.') continue;

                if(s[i][j] == comp[i][j]) {
                    flag2 = 1;
                } else if(s[i][j] == comp1[i][j]) {
                    flag3 = 1;
                }
            }
        }
        if(flag2 == 1 && flag3 == 1) {
            op "NO" << endl;
        } else if(flag2 == 1) {
            op "YES" << endl;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                op comp[i][j];
            }
            op endl;
        } } else {
            op "YES" << endl;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                op comp1[i][j];
            }
            op endl;
        }
    }
}
}