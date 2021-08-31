#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long

int func(int p, vector<int> a) {
    int del = 0, ans = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != p) {
            del += (p - a[i]);
        } 
        ans += abs(del);
        p ^= 1;
    }
    
    return ans;
}

signed main(){
    tsukuyomi
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        vector<int> comp;
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++) {
            ip a[i];
            if(a[i] % 2 == 0) {
                comp.pb(0);
                even++;
            } else {
                comp.pb(1);
                odd++;
            }
        }
        if(abs(even - odd) > 1) {
            op -1 << endl;
        } else {
            if(n % 2 == 0) {
                int ans = min(func(0, comp), func(1, comp));
                op ans << endl;
            } else {
                if(odd > even) {
                    int ans = func(1, comp);
                    op ans << endl;
                } else {
                    int ans = func(0, comp);
                    op ans << endl;
                }
            }
        }
    }
}