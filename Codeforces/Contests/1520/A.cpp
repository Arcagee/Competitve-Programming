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
        string s;
        ip s;
        if(n == 1 || n == 2) {
            op "YES" << endl;
            continue;
        }
        vector<int> h(26, 0);
        string ans = "YES";
        for(int i = 0; i < n - 1; i++) {
            if(s[i] != s[i + 1]) {
                h[s[i] - 'a'] = -1;
                if(h[(s[i + 1] - 'a')] == -1) {
                    ans = "NO";
                    break;
                }
            }
        }

        op ans << endl;
    }
}