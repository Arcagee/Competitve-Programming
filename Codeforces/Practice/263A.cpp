#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int a[6][6];
    int x, y;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            ip a[i][j];
            if(a[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    op (abs(3 - x) + abs(3 - y)) << endl;
}