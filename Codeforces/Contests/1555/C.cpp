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
        vector<int> sum1(n);
        vector<int> sum2(n);
        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            if(i == 0) {
                sum1[i] = x;
                continue;
            }
            sum1[i] = sum1[i - 1] + x;
        }

        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            if(i == 0) {
                sum2[i] = x;
                continue;
            }
            sum2[i] = sum2[i - 1] + x;
        }


        // for(int i = 0; i < n; i++) {
        //     op sum1[i] << " ";
        // }op endl;
        int val1= 0, val2 = 0;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                ans.push_back(sum1[n - 1] - sum1[0]);
                continue;
            }

            if(i == n - 1) {
                ans.push_back(sum2[n - 2]);
                continue;
            }
            ans.push_back(max(sum1[n - 1] - sum1[i], sum2[i - 1]));
        }

        sort(ans.begin(), ans.end());
        op ans[0] << endl;
    }
}