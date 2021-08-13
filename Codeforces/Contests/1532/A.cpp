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

        for(int i = 0; i < n; i++) {
            a[i] = i + 1;
        }
        if(n % 2 == 0) {
            for(int i = 0; i < n - 1; i+=2) {
                swap(a[i], a[i + 1]);
            }
        } else {
            for(int i = 0; i < n - 1; i+=2) {
                swap(a[i], a[i + 1]);
            }
            swap(a[n - 1], a[n - 2]);
        }

        for(int i = 0; i < n; i++) {
            op a[i] << " ";
        }

        op endl;
    }
}