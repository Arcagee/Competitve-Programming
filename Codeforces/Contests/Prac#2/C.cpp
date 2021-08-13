#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    ip n;

    vector<int> a(n);
    vector<int> h(8, 0);
    bool flag = 0;
    for(auto &A: a) {
        ip A;
        h[A]++;
        if(A == 7 || A == 5) {
            flag = 1;
        }
    }
    vector<int> ans;
    if(flag == 1) {
        op -1 << endl;
        return 0;
    }

    // pairs possible 1 2 4, 1 2 6, 1 3 6
    int cnt = 0;
    for(int i = 1; i <= n/3; i++) {
        if(h[1] > 0 && h[2] > 0 && h[4] > 0) {
            ans.push_back(1);
            ans.push_back(2);
            ans.push_back(4);
            h[1]--; h[2]--; h[4]--;
            cnt+=3;
        } else if(h[1] > 0 && h[2] > 0 && h[6] > 0) {
            ans.push_back(1);
            ans.push_back(2);
            ans.push_back(6);
            h[1]--; h[2]--; h[6]--;
            cnt+=3;
        } else if(h[1] > 0 && h[3] > 0 && h[6] > 0) {
            ans.push_back(1);
            ans.push_back(3);
            ans.push_back(6);
            h[1]--; h[3]--; h[6]--;
            cnt+=3;
        }
    }

    if(cnt != n) {
        op -1 << endl;
    } else {
        int cur = 0;
        for(int i = 0; i < ans.size(); i++) {
            op ans[i] << " ";
            cur++;
            if(cur == 3) {
                op endl;
                cur = 0;
            }
        }
    }
    
} 