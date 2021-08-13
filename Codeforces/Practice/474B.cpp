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

    vector<int> a(1000001);
    // we are making an array with the max value per index 
    // 5
    // 2 7 3 4 9 will make
    // 0 2 9 12 16 25 which is the max possible value in that set. 
    // Now if we calculate the lower bound in this array it will result in
    // the index which we want
    for(int i = 0; i < n; i++) {
        int temp;
        ip temp;
        a[i + 1] = a[i] + temp;
    }

    int m;
    ip m;

    for(int i = 0; i < m; i++) {
        int temp;
        ip temp;
        int res = lower_bound(a.begin(), a.begin() + (n + 1), temp) - a.begin();
        op res << endl;
    }
}