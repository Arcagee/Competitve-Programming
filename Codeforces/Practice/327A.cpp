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

    int sum = 0;

    for(auto &A: a) {
        ip A;
        sum += A;
    }
    int ans = 0;
    //Using brute force O(N3)
    int z = 8;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int tempsum = sum;
            for(int k = i; k <= j; k++) {
                if(a[k] == 1) {
                    tempsum--;
                } else {
                    tempsum++;
                }
            }
            ans = max(ans, tempsum);
        }
    }
    op ans << endl;
}