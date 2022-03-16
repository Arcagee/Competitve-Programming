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
    cin >> t;
    while(t--) {
        ip n; multiset<int> st;
        vi a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
            st.insert(a[i]);
        }

        vi convert; 
        for(int i = 1; i <= n; i++) {
            auto it = st.find(i);
            if(*it <= n) {
                st.erase(it);
            } else convert.pb(i);
        }


        int x = 0, ans = 0;
        for(int i = 0; i < convert.size(); i++) {
            ans++;
            auto it = st.begin();
            if((*it - 1)/2 < convert[i]) {
                ans = -1;
                break;
            }

            st.erase(it);
        }

        op ans << endl;
    }
}