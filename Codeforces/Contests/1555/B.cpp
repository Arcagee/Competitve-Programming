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
        int w, h;
        ip w >> h;
        vector<int> x(2, 0), y(2, 0);
        for(int i = 0; i < 2; i++) {
            ip x[i] >> y[i];
        }

        int a, b;
        ip a >> b;
        bool flag = 0;
        int res1 = INT32_MAX, res2 = INT32_MAX;
        if(w - (x[1] - x[0]) >= b) {
            flag = 1;
            int val = w - (x[1] - x[0]);
            if(h - y[1] >= b || y[0] >= b) {
                op fixed << setprecision(9) << (double)0 << endl; 
                continue;
            }
            res1 = (double) min(w - x[1], x[0]);
        }

        if(h - (y[1] - y[0]) >= a) {
            flag = 1;
            int val = h - (y[1] - y[0]);
            if(w - x[1] >= a || x[0] >= a) {
                op fixed << setprecision(9) << (double)0 << endl;
                continue;
            }
            res2 = (double) min(h - y[1], y[0]);
        }
        if(flag == 0) {
            op -1 << endl;
        } else {
            op fixed << setprecision(9) << (double) min(res1, res2) << endl;
        }
    }
}