#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

int msb(int n) {
    if(n == 0) return 0;
    int mb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        mb++;
    }
 
    return (1 << mb);
}

signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        vector<int> even;
        vector<int> odd;
        for(int i = 0; i < n; i++) {
            ip a[i];

            if(a[i] % 2 == 0) even.push_back(a[i]);
            else odd.push_back(a[i]);
        }

        for(int i = 0; i < even.size(); i++) {
            op even[i] << " ";
        }

        for(int i = 0; i < odd.size(); i++) {
            op odd[i] << " ";
        }

        op endl;
    }   
}