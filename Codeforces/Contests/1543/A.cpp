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
        int a, b;
        ip a >> b;

        if(a == b) {
            op "0 0" << endl;
        } else {
            if(b > a) swap(a, b);
            int gc = a - b;
            int nuk = a % gc;
            int kun = gc - a % gc;
            op gc << " " << min(nuk, kun) << endl;
        }

    }
}