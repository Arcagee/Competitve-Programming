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
        string s; int k;
        ip n >> k >> s;
        int ans = 0;
        for(int i = 0; i < n;) {
            int j = i + 1;

            while(j < n && s[j] != '1') j++;

            int left = s[i] == '1' ? k : 0;
            int right = j < n && s[j] == '1' ? k : 0;
            int len = j - i;

            if(left == k) {
                len--;
            }

            len -= left + right;

            if(len > 0) {
                ans += (len + k)/(k + 1);
            }

            i = j;
        }

        op ans << endl;
    }
}