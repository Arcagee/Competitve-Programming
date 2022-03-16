#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define MOD 1000000007
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        string s;
        ip s;
        int ans = INT_MAX;
        for(int i = 0; i < 60; i++) {
            int num = pow(2, i);
            string comp = to_string(num);
            int j = 0, k = 0, cnt = 0;
            while(j < s.size() && k < comp.size()) {
                if(s[j] == comp[k]) {
                    cnt++;
                    j++;
                    k++;
                } else {
                    j++;
                }
            } 
            ans = min(ans, s.size() + comp.size() - cnt * 2);
        }

        op ans << endl;
    }
}

