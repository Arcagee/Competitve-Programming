#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
signed main(){
    fast
    int n, m;
    ip n >> m;

    if(m == 0) {
        if(n == 1) {
            op "0 0" << endl; 
            return 0;
        } else {
            op "-1 -1" << endl;
            return 0;
        }
    }

    string maxi;
    string mini;

    for(int i = 0; i < n; i++) {
        int x = min(9, m);
        maxi.push_back(x + '0');
        if(m > 9) {
            m -= 9;
        } else {
            m = 0;
        }
    }

    if(m != 0) {
        op "-1 -1" << endl;
        return 0;
    }

    for(int i = n - 1; i >= 0; --i) {
        mini.push_back(maxi[i]);
    }
    int i = 0;
    bool flag = 0;
    while(mini[i] == '0') {
        flag = 1;
        i++;
    }
    if(flag == 1) {
        mini[0]++;
        mini[i]--;
        op mini << " " << maxi << endl;
    } else
        op mini << " " << maxi << endl;
}