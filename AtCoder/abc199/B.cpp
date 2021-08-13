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
    vector<int> b(n);

    for(int i = 0; i < n; i++) {
        ip a[i];
    }

    for(int i = 0; i < n; i++) {
        ip b[i];
    }
    int ans = 0;
    int cnt = 0;

    for(int i = 1; i <= 1000; i++) {

        for(int j = 0; j < n; j++) {
            if(i >= a[j] && i <= b[j]) {
                cnt++;
            } else break;
        }

        if(cnt == n) {
            ans++;
        }
        cnt = 0;
    }

    // int cnt = 0;
    // int temp = 0;
    // int ans = 0;
    // for(int i = 0; i < n; i++) {
    //     temp = min(a[i], b[i]);

    //     for(int j = 0; j < n; j++) {
    //         if(temp >= a[j] && temp <= b[j]) {
    //             cnt++;
    //             continue;
    //         } else {
    //             temp = 0;
    //             break;
    //         }
    //     }
    //     if(cnt == n) {
    //         ans++;
    //         cnt == 0;
    //     }
    // }
    
    op ans  << endl;
}