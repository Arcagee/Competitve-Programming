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
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        ip a[i];
        temp.push_back(a[i] % 200);
    }
    int cnt = 0;
    vector<int> h(1000005, 0);
    for(auto x: temp) {
        h[x]++;
    }
    for(auto x: h) {
        if(x >= 2) {
            cnt += x * (x - 1) / 2;
        }
    }
    // for(int i = 0; i < n; i++) {
    //     for(int j = i + 1; j < n; j++) {
    //         if(a[i] % 200 == a[j] % 200) {
    //             cnt++;
    //         }
    //     }
    // }
    op cnt<<endl;
}