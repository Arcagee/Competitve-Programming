#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> h(101, 0);
        for(int i = 0; i < n; i++) {
            ip a[i];
            h[a[i]]++;
        }

        for(int i = 0; i < n; i++) {
            ip b[i];
            h[b[i]]--;
        }
        bool flag = 0;
        for(auto x: h) {
            if(x > 0) {
                flag = 1;
                op -1 << endl;
                break;
            }
        }

        if(flag == 0) {
            int cnt = 0;
            vector<pair<int, int>> ans;
            for(int i = 0; i < n; i++) {
                if(a[i] - b[i] != 0) {
                    for(int j = 0; j < n; j++) {
                        if(a[i] - b[i] < 0 && i != j) {
                            if(a[j] - b[j] > 0) {
                                while(a[i] != b[i] && a[j] != b[j]) {
                                    cnt++;
                                    ans.push_back({j + 1, i + 1});
                                    a[i]++;
                                    a[j]--;
                                }
                            }
                        } else if(a[i] - b[i] > 0 && i != j) {
                            if(a[j] - b[j] < 0) {
                                while(a[i] != b[i] && a[j] != b[j]) {
                                    cnt++;
                                    ans.push_back({i + 1, j + 1});
                                    a[i]--;
                                    a[j]++;
                                }
                            }
                        }
                    }
                }
            }

            op cnt << endl;
            for(auto x: ans) {
                op x.first << " " << x.second << endl;
            }
        }
    }
}