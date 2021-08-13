#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int a;
    ip a;
    string s = to_string(a);

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(a[i] == a[j] && i != j) {
                break;
            }
        }
    }
}