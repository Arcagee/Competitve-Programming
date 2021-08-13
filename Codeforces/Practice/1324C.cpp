#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
#define endl '\n'
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        string s;
        ip s;
        n = s.size();
        vector<int> a;
        a.push_back(0);
        for(int i = 0; i < n; i++) {
            if(s[i] == 'R') {
                a.push_back(i + 1);
            } 
        }
        
        a.push_back(n + 1);
        
        int ans = 0;
        for(int i = 0; i < a.size() - 1; i++) {
            ans = max(ans, a[i + 1] - a[i]);
        }

        op ans << endl;
    }
}