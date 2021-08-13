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

        for(auto &A: a) {
            ip A;
        }

        sort(a.begin(), a.end());
        int pos1 = 0, pos2 = 0;
        int mini = INT64_MAX;
        for(int i = 0; i < n - 1; i++) {
            if(abs(a[i] - a[i + 1]) < mini) {
                mini = abs(a[i] - a[i + 1]);
                pos1 = i;
                pos2 = i + 1;
            }
        }
        op a[pos1] << " ";

        for(int i = pos2 + 1; i < n; i++) {
            op a[i] << " ";
        }

        for(int i = 0; i < pos1; i++) {
            op a[i] << " ";
        }

        op a[pos2] << endl;
    }
}