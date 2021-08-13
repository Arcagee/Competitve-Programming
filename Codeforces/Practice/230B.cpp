#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
#define N 1000005
bool isSquare(int n) {
    int k = sqrt(n);
    if(k * k == n) return true;
    return false;
}

signed main(){
    fast
    vector<bool> prime(N, 1);
    for(int i = 2; i * i <= N; i++) {
        if(prime[i] == 1) {
            for(int j = i * i; j <= N; j+=i) {
                prime[j] = 0;
            }
        }       
    }

    int n;
    ip n;
    for(int i = 0; i < n; i++) {
        int x;
        ip x;
        if(isSquare(x) && x > 1) {
            if(prime[sqrt(x)] == true) {
                op "YES" << endl;
            } else op "NO" << endl;
        } else {
            op "NO" <<endl;
        }
         
    }
}