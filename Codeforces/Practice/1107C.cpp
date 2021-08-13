#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, k;
    ip n >> k;
    vector<int> a(n);
    string s;

    for(int i = 0; i < n; i++) {
        ip a[i];
    }
    ip s;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int j = i;
        vector<int> val;
        while(s[i] == s[j] && j < n) {
            val.push_back(a[j]);
            j++;
        }
        sort(val.rbegin(), val.rend());
        //because we want i to begin at the occurence of the next different element
        i = j - 1;
        int len = val.size();

        for(int m = 0; m < min(k, len); m++) {
            ans += val[m];
        }
        val.clear();
    }

    op ans << endl;
}