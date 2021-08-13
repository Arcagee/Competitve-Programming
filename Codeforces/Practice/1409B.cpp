#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long

int solve(int A, int B, int X, int Y, int N) {
    int val = min(A - X, N);  
    int val1 = min(N - val, B - Y);
    int ans = (A - val) * (B - val1);
    return ans;
}

signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        int a, b, x, y;
        ip a >> b >> x >> y >> n;
        
        int ans = min(solve(a, b, x, y, n), solve(b, a, y, x, n));
        op ans << endl;
    }
}