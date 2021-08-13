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

        for(auto &x: a) {
            ip x;
        }

        int sum = 0;

        for(int i = 0; i < n; i++) {
            int temp = a[i];
            int j;
            for(j = i; j < n; j++) {
                if(a[i] > 0 && a[j] > 0 || a[i] < 0 && a[j] < 0) {
                    temp = max(temp, a[j]);
                } else break;
            }
            sum += temp;
            i = j - 1;
        }
n
        op sum << endl;
    }
}