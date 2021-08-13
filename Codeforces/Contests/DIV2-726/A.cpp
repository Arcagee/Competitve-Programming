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
        int sum = 0;
        for(auto &A: a) {
            ip A;
            sum += A;
        }
        if(sum >= n) {
            op sum - n << endl;
        } else {
            op 1 << endl;
        }
    }
}