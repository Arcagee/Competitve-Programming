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
        vector<int> a(n+1);

        int maxi = 0, mini = INT64_MAX;
        int pos1, pos2;
        for(int i = 1; i <= n; i++) {
            ip a[i];
            // finding the index of the maximum and min elements
            if(a[i] > maxi) {
                maxi = a[i];
                pos1 = i;
            }
            if(a[i] < mini) {
                mini = a[i];
                pos2 = i;
            }
        }

        int res1, res2, res3, res4;

        // when we delete from one side
        if(pos2 > pos1) {
            // from front
            res1 = pos2;
            // from back
            res2 = n - pos1 + 1;
        } else {
            res1 = pos1;
            res2 = n - pos2 + 1;
        }
        // one from front and one from back
        res3 = pos2 + n - pos1 + 1;
        res4 = pos1 + n - pos2 + 1;

        op min({res1, res2, res3, res4}) << endl;
    }
}