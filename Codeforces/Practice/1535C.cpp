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
        ip s;
        int len = s.size();
        int invalid = 0;
        int total = (len * (len + 1))/2;
        int cnt = 0;
        bool flag1 = 0, flag2 = 0;
        string prev, next;

        for(int i = 0; i < n; i++) {
            if(a[i] == '?'){
                cnt++;
                if(a[i - 1] == '0' || a[i - 1] == '1'){
                    prev = a[i - 1];
                    flag1 = 1;
                }
                if(a[i + 1] == '0' || a[i - 1] == '1'){
                    next = a[i + 1];
                    flag2 = 1;
                }
            }
        }
    }
}