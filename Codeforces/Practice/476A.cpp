#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, m;
    ip n >> m;

    if(m > n) {
        op -1 << endl;
    } else {
        double ans = 0;
        double maxi = n;
        double mini = ceil(double(n)/2);

        for(int i = mini; i <= maxi; i++) {
            if(i % m == 0) {
                ans = i;
                break;
            }
        }
        
        op ans << endl;
    }
}