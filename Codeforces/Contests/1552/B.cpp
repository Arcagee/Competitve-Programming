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
        int a[n + 1][6];
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= 5; j++) {
                ip a[i][j];
            }
        }
        // for(int i = 1; i <= n; i++) {
        //     for(int j = 1; j <= 5; j++) {
        //         op a[i][j] << " ";
        //     } op endl;
        // }
        int comp, ans = -1;
        vector<int> player(6);
        for(int i = 1; i <= 5; i++) {
            comp = 60000;
            for(int j = 1; j <= n; j++) {
                if(a[j][i] < comp) {
                    player[i] = j;
                    comp = a[j][i];
                }
                // op a[j][i] << ' ';
            } 
        }
        vector<int> round(n + 1, 0);
        for(int i = 1; i < 6; i++) {
            round[player[i]]++;
        }

        for(int i = 1; i <= n; i++) {
            // if(round[i] >= 3) {
            //     ans = i;
            //     break;
            // }
            op round[i] << ' ';
        }
        op ans << endl;
    }
}