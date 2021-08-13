#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> a(300);
        bool flag = 0, flag1 = 0;
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        for(int i = 0; i < n - 1; i++) {
            if(a[i] < 0) {
                flag = 1;
                op "NO"<<endl;
                break;
            }
        }
        if(flag == 0) {
            op "Yes"<<endl;
            op 101  <<endl;
            for(int i = 0; i <= 100; i++) {
                op i<<" ";
            }
        } op endl;
    }
}