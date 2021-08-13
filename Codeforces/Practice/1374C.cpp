#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        string s;
        ip s;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            if(s[i] == '(')
                a[i] = 1;
            else    
                a[i] = 0;
        }
        stack<int> st;
        st.push(100);
        // ( -> 1   ) -> 0
        for(int i = 0; i < n; i++) {
            if(a[i] == 0 && st.top() != 1) {
                st.push(a[i]);
            } if(a[i] == 1) {
                st.push(a[i]);
            } else if(a[i] == 0 && st.top() == 1) {
                st.pop();
            }
        }
        int ans = st.size();
        op ans / 2 << endl;
    }
}