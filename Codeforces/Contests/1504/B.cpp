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
        ip n;
        string a, b;
        ip a >> b;
        vector<int> cnt1(n), cnt2(n);
        int zero = 0, one = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == '1') {
                one++;
                cnt1[i] += one;
                cnt2[i] += zero;
            } else {
                zero++;
                cnt2[i] += zero;
                cnt1[i] += one;
            }
        }
        // for(int i = 0; i < n; i++) {
        //     op cnt1[i] << " ";
        // } op endl;

        // for(int i = 0; i < n; i++) {
        //     op cnt2[i] << " ";
        // } op endl;
        bool flag = 0;
        string ans = "YES";
        for(int i = n - 1; i >= 0; --i) {
            if(flag == 0) {
                if(a[i] == b[i]) {
                    continue;
                } else if(a[i] != b[i] && cnt1[i] == cnt2[i]) {
                    flag = 1;
                } else {
                    // op cnt1[i] << " " << cnt2[i] << " ";
                    ans = "NO";
                    break;
                }
            } else if(flag == 1) {
                if(a[i] != b[i]) {
                    continue;
                } else if(a[i] == b[i] && cnt1[i] == cnt2[i]) {
                    flag = 0;
                } else {
                    // op cnt1[i] << " " << cnt2[i] << " ";
                    ans = "NO";
                    break;
                }
            }
        }

        op ans << endl;
    }
}