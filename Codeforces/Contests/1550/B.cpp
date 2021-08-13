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
        int a, b;
        ip n >> a >> b;
        string s;
        ip s;
        int brute = 0;
        for(int i = 0; i < n; i++) {
            brute += (a * 1 + b);
        }
        int zero = 0, one = 0;
        for(int i = 0; i < n; i++) {
            s[i] == '0' ? zero++ : one++;
        }

        bool flag = 0;
        if(zero > one) {
            flag = 1;
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(flag == 0) {
                if(s[i] == '0') {
                    int cur = 1;
                    int j = i;
                    while(j < n) {
                        if(j == i) {
                            j++; 
                            continue;
                        }

                        if(s[j] == '0') {
                            cur++;
                        } else break;
                        j++;
                    }
                    ans += (cur * a + b);
                    i = j;
                }
            } else if(flag == 1) {
                if(s[i] == '1') {
                    int cur = 1;
                    int j = i;
                    while(j < n) {
                        if(j == i) {
                            j++; 
                            continue;
                        }

                        if(s[j] == '1') {
                            cur++;
                        } else break;
                        j++;
                    }
                    ans += (cur * a + b);
                    i = j;
                }
            }
        }
        if(flag == 0)
            ans += one * a + b;
        else
            ans += zero + a + b;
        if(n == 1) {
            op brute << endl;
            continue;
        }
        op max(ans, brute) << endl;
    }
}