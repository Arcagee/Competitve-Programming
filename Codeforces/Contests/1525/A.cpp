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
        int k;
        ip k;
        int z = 100;
        for(int i = 2; i <= 100;) {
            if(z % i == 0 && k % i == 0) {
                z /= i;
                k /= i;
            } else i++;
        }

        op z << endl;
    }
}