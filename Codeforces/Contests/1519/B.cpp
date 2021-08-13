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
        int m, k;
        ip n >> m >> k;

        if(n == 1 or m == 1) {
            if(n == 1) {
                ((m - 1) == k) ? op "YES" : op "NO";
                op endl;
                continue;
            } else {
                (n - 1) == k ? op "YES" : op "NO";
                op endl;
                continue;
            }
        }
        if(n == m && m == k - 1) {
            op "YES" << endl;
            continue;
        }
        string ans = "NO";

        int cnt = k, i = 1, j = 1, cost = 0;
        bool flag = 0;
        while(cnt > 0) {
            if(flag == 0) {
                i++;
                flag = 1;
                cnt -= j;
                cost += j;
            } else {
                j++;
                flag = 0;
                cnt -= i;
                cost += i;
            }
        }
        if(i == n && j == m && cost == k) {
            ans = "YES";
        } else {
            i = 1; j = 1; cnt = k, cost = 0;
            flag = 0;
            while(cnt > 0) {
                if(flag == 0) {
                    j++;
                    flag = 1;
                    cnt -= i;
                    cost += i;
                } else {
                    i++;
                    flag = 0;
                    cnt -= j;
                    cost += j;
                }
            }

            if(i == n && j == m && cost == k) {
                ans = "YES";
            }
        }

        op ans << endl;
    }
}