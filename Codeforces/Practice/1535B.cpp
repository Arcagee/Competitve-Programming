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
        vector<int> v;
        for(int i = 0; i < n; i++){
            ip a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 == 0) {
                v.push_back(a[i]);
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0) {
                v.push_back(a[i]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(__gcd(v[i], 2 * v[j]) > 1) {
                    cnt++;
                }
            }
        }
        op cnt<<endl;
    }
}