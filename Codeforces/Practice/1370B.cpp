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
        int len = 2 * n;

        // Have to print indexes not numbers.

        vector<int> a(len + 1);
        vector<int> h(1002, 0);
        vector<int> odd;
        vector<int> even;
        for(int i = 1; i <= len; i++) {
            ip a[i];
            if(a[i] % 2 == 0) {
                even.push_back(i);
            } else if(a[i] % 2 != 0) {
                odd.push_back(i);
            }
        }

        vector<pair<int, int>> ans;
        int s1 = even.size(), s2 = odd.size();

        for(int i = 0; i < even.size(); i+=2) {
            if(s1 >= 2) {
                ans.push_back({even[i], even[i + 1]});
                s1-=2;
            }
        }

        for(int i = 0; i < odd.size(); i+=2) {
            if(s2 >= 2) {
                ans.push_back({odd[i], odd[i + 1]});
                s2-=2;
            }
        }

        for(int i = 0; i < n - 1; i++) {
            op ans[i].first << " " << ans[i].second << endl;
        }
}
}