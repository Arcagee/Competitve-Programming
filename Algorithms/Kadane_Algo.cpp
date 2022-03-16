#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

// O(N) solution
int kadane(vector<int> a, int n) {
    int maxsum = INT64_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        if(sum > maxsum) {
            maxsum = sum;
        } 
        if(sum < 0) {
            sum = 0;
        }
    }

    return maxsum;
}

signed main(){
    fast
    int n;
    ip n;
    vector<int> a(n);
    op kadane(a, n) << endl;
}