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
        int a[n][5];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 5; j++) {
                ip a[i][j];
            }
        }

        int win = 0;
        
        for(int i = 1; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < 5; j++) {
                if(a[i][j] < a[win][j]) {
                    cnt++;
                    if(cnt == 3) {
                        win = i;
                        break;
                    }
                }
            }
        }


        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < 5; j++) {
                if(a[i][j] < a[win][j]) {
                    cnt++;
                }
                if(cnt == 3) {
                    win = -1;
                    break;
                }
            }
            if(win == -1) break;
        }

        if(win != -1) {
            op win + 1 << endl;
        } else {
            op win << endl;
        }
    }
}