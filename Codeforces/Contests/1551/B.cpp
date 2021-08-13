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
        string s;
        ip s;
        n = s.size();
        string k;
        vector<int> h(26, 0);
        int red = 0, green = 0;
        for(int i = 0; i < n; i++) {
            if(h[s[i] - 'a'] < 2) {
                k += s[i];
                h[s[i] - 'a']++;
            }
        }

        op k.size()/2 << endl;
    }
}