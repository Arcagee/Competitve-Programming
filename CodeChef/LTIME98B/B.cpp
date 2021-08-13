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
        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        for(int i = 0; i < n; i++) {
            ip b[i];
        }
        vector<int> comp, v;
        int cur = INT32_MAX;
        for(int i = 0; i < n; i++) {
            int temp = a[0] + b[i];
            temp %= n;
            cur = min(temp, cur);
        }

        for(int i = 0; i < n; i++) {
            int temp = a[0] + b[i];
            temp %= n;
            if(temp == cur) {
                comp.push_back(i);
            }
        }

        if(comp.size() == 1) {
            int temp = 0, var1 = comp[0];
            for(int i = var1; i < n; i++, temp++) {
                op (a[temp] + b[i]) % n << " ";
            }

            for(int i = 0; i < var1; i++, temp++) {
                op (a[temp] + b[i]) % n << " ";
            }
        } else {
            vector<int> x, y;
            int temp = 0, var1 = comp[0];

            for(int i = var1; i < n; i++, temp++) {
                x.push_back((a[temp] + b[i]) % n);
            }

            for(int i = 0; i < var1; i++, temp++) {
                x.push_back((a[temp] + b[i]) % n);
            }
            var1 = comp[1];
            temp = 0;
            for(int i = var1; i < n; i++, temp++) {
                y.push_back((a[temp] + b[i]) % n);
            }
            
            for(int i = 0; i < var1; i++, temp++) {
                y.push_back((a[temp] + b[i]) % n);
            }

            if(x < y) {
                for(int i = 0; i < n; i++) {
                    op x[i] << " ";
                } op endl;
            } else {
                for(int i = 0; i < n; i++) {
                    op y[i] << " ";
                } op endl;
            }
        }
    }
}