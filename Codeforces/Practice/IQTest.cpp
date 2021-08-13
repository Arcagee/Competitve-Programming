#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

bool isPrime(int n){
    for(int i = 2; i<n; i++){
        if((n % i) == 0) return false;
    }
    return true;
}

signed main(){
    fast
    int n;
    ip n;
    vector<int> a(n);
    int even = 0, prime = 0, odd = 0;
    for(int i = 0; i < n; i++){
        ip a[i];
        if(a[i] % 2 == 0) {
            even++;
        } else if(a[i] % 2 != 0){
            odd ++;
        } else if(isPrime(a[i])){
            prime++;
        }
    }
    if(even > odd && even > prime){
        for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0){
                op i+1<<"\n";
                break;
            }
        }
    } else if(odd > even && odd > prime){
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                op i+1<<"\n";
                break;
            }
        }
    } else if(prime > even & odd > prime) {
        for(int i = 0; i < n; i++){
            if(!isPrime(a[i])){
                op i+1<<"\n";
                break;
            }
        }
    }
}