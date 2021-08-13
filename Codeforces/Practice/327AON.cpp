// O(N) solution for 327 - A Codeforces
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

    int maxsum = INT32_MIN;
    int cur = sum;

    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            cur++;
        } else {
            cur--;
        }
        if(cur > maxsum) {
            maxsum = cur;
        }
        if(cur < sum) {
            cur = sum;
        }
    }

    op maxsum << endl;
}