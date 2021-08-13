#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long

bool isSquare(int n) {
    int x = sqrt(n);
    if(x * x == n) 
        return true;
    return false;
}
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }

        string ans = "NO";
        for(int i = 0; i < n; i++) {
            if(isSquare(a[i]) == false) {
                ans = "YES";
                break;
            }
        }

        op ans << endl;
    }
}