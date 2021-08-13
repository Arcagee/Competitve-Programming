#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    tsukuyomi
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<string> a(n);
        string contri = "abcde";
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        int ans = 0;
        for(int i = 0; i < 5; i++) {
            vector<int> value;
            for(int j = 0; j < n; j++) {
                int cnt = 0, rest = 0;
                for(auto x: a[j]) {
                    if(x == contri[i]) {
                        cnt++;
                    } else {
                        rest++;
                    }
                }
                value.push_back(cnt - rest);
            }

            sort(value.rbegin(), value.rend());
            int res = 0, cnt = 0;
            for(int i = 0;  i < value.size(); i++) {
                if(res + value[i] <= 0) {
                    break;
                } else {
                    res += value[i];
                    cnt++;
                }
            }

            ans = max(cnt, ans);
        }

        op ans << endl;
    }
}