#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

void solve() {
    int n;
    ip n;
    string s;
    ip s;
    vector<int> h(26, 0);
    bool flag1 = 0, flag2 = 0, flag3 = 0;
    for(int i = 0; i < n; i++) {
        h[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(h[i] == 0) {
            op char('a' + i)<<endl;
                return;
        }
    }

    set<string> st;
    // Inserting all 2 char pairs from the string in set
    for(int i = 0; i < n - 1; i++) {
            string mex;
            mex += s[i];
            mex += s[i + 1];
            st.insert(mex);
    }

    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 26; j++) {
            string mex;
            mex += char(i + 'a');
            mex += char(j + 'a');
            if(st.find(mex) == st.end()) {
                op mex<<endl;
                return;
            }
        }
    }

    set<string> k;
    // Inserting all three char pairs in the set
    for(int i = 0; i < n - 2; i++) {
        string mex;
        mex += s[i];
        mex += s[i+1];
        mex += s[i+2];
        k.insert(mex);
    }

    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 26; j++) {
            string mex;
            mex += 'a';
            mex += char(i + 'a');
            mex += char(j + 'a');
            if(k.find(mex) == k.end()) {
                op mex<<endl;
                return;
            }
        }
    }
}


signed main(){
    fast
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}