#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    // cin >> t;
    t = 1;
    while(t--) {
        string s;
        ip s;
        bool flag = true;
        map<char, int> mp;
        n = s.size();
        string copy = s;
        char last = s[n - 1];
        for(int i = 0; i < n; i++) {
            if(s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8') {
                if(s[i] < last) {
                    s = copy;
                    swap(s[i], s[n - 1]);
                    flag = false;
                    break;
                }
                // swap(s[i], s[n - 1]);
                // flag = false;
                // break; 
            }
        }

        if(flag == true) {
            for(int i = n - 1; i >= 0; --i) {
                if(s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8') {
                    swap(s[i], s[n - 1]);
                    flag = false;
                    break; 
                }
            }
        }
        if(flag == false){
            op s << endl;
        }
        else op -1 << endl;
    }
}