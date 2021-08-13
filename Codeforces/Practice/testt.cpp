#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
signed main(){
    fast
    int m, s;
    ip m >> s;

    if(m == 0) {
        op "0 0" << endl;
    } else if(s == 0) {
        op "-1 -1" << endl;
    }
    else {
        string maxi;
        string mini;

        for(int i = 0; i < m; i++) {
            maxi += to_string(min(s, 9));
            if(s > 9) {
                s -= 9;
            } else {
                s = 0;
            }
        }
        int z = 0;
        string k = z;
        if(maxi[m - 1] == '0') {
            mini = maxi;
            mini[0] = '1';
            int k = int(mini[m - 1]);
            k = k - 1;
            mini[m - 1] = char(k);
        } else {
            mini = maxi;
            reverse(mini.begin(), mini.end());
        }

        op mini << " " << maxi;
    }
}