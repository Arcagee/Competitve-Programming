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
        vector<int> a(n);
        vector<int> h(5, 0);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        sort(a.begin(), a.end());
        vector<int> count;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == a[i + 1]) {
                cnt++;
            } else {
                count.push_back(cnt);
                cnt = 0;
            }    
        }
        // the count of the repeating elements 
        // will be the limit for the size of the
        // two groups.
        int lim = count.size();

        // for the second team we need same elements 
        // to maximise we will put the element which
        // is repeated the most
        sort(count.rbegin(), count.rend());
        int maxcount = 0;
        for(auto x: count) {
            maxcount = x + 1;
            break;
        }

        op max(min(lim, maxcount - 1), min(lim - 1, maxcount)) << endl;
    }
}