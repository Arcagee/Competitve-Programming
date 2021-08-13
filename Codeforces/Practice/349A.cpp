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
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        ip a[i];
    }

    // its not about balance its about the quantity of notes.

    int m = 0, p = 0;
    bool flag = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == 25) {
            m++;
        } else if(a[i] == 50) {
            p++; // 50 note added
            if(m <= 0) {
                flag = 1;
                op "NO" << endl;
                break;
            } else {
                m--; // 25 note as change
            }   
        } else if(a[i] == 100) {
            if(m <= 0) {
                flag = 1;
                op "NO" << endl;
                break;
            } else if(p >= 1 && m >= 1) { // 50 + 25 change
                p--;
                m--;
            } else if(m >= 3) { // 25 + 25 + 25 change
                m-=3;
            } else {
                flag = 1;
                op "NO" << endl;
                break;
            }
        }
    }

    if(flag == 0) {
        op "YES" << endl;
    }
}