#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        string s;
        ip n;
        ip s;
        int pos = -1, des = -1;
        vector<char> v(n);
        bool flag = 0;
        for(int i = 0; i < n; i++) {
            v[i] = s[i];
            if(s[i] == '1' && flag == 0) {
                flag = 1;
                des = i;
            }
            if(s[i] == '0') {
                pos = i;
            }
        }

        if(pos - des < 0 || pos == -1 || des == -1) {
            op s << endl;
        } else {
            for(int i = 0; i < n; i++) {
                if(i >= des && i < pos) {
                    continue;
                }
                op s[i];
            } op endl;
        }
    }
}