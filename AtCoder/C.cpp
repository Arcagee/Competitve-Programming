#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
#define N 1000000007
// Sometimes its better not to think hard and rather come up with a fast approach.
signed main(){
    fast
    int a, b, c;
    ip a >> b >> c;
    if(c % 2 == 0) {
        if(abs(a) > abs(b)) {
            op ">";
        } else if(abs(a) < abs(b)) {
            op "<";
        } else {
            op "=";
        }
    } else {
        if(a > b) {
            op ">";
        } else if(b > a) {
            op "<";
        } else {
            op "=";
        }
    }
}