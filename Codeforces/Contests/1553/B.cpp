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
        string s, k;
        ip s >> k;
        n = s.size();
        int x = 0;
        bool right = 0, left = 0;
        reverse(k.begin(), k.end());
        int i = 0;
        string ans = "YES";
        for(int i = 0; i < n; i++) {
            if(k[0] == s[i]) {
                ans = "YES";
                break;
            } else {
                ans = "NO";
            }
        }
        while(x < k.size() - 1) {
            if(s[i] == k[x]) {
                if(s[i + 1] == k[x + 1] && i < n && right == 0) {
                    while(s[i + 1] == k[x + 1] && i < n) {
                        x++;
                        i++;
                    }
                } else if(s[i - 1] == k[x + 1] && i > 0) {
                    right = 1;
                    while(s[i - 1] == k[x + 1] && i > 0) {
                        x++;
                        i--;
                    }
                } else if(i != 0 && i != n){
                    x = 0;
                    right = 0;
                } else {
                    ans = "NO";
                    break;
                }
            } else {
                i++;
            }
        }
        op ans << endl;
    }
}