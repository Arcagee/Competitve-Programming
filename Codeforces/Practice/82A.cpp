#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n;
    ip n;
    vector<string> s = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    // The sequences after 5 turns will be
    // S, S, L, L, R, R, H, H
    // 10-> S, S, S, S, L, L, L, L, R, R, R, R, H, H, H, H
    // The sequences repeat after 5 turns.

    n -= 1; // We are taking zero based indexing

    while(n >= 5) {
        n -= 5;
        n /= 2; 
        // Why subtract by 5 and divide by two.
        // IP -> 5 -> 4 and it will not go in the loop 
        // IP -> 6 -> 5 -> 0 -> Sheldon 
        // IP -> 10 -> 9 -> 4 [S, L, P, R, H, S, S, L, L, R(10 but in zero based 9)]
    }

    op s[n] << endl;
}