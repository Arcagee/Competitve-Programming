#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
vector<int> dp(100, 0);

int fibo(int n) {
    if(n == 1 or n == 0) {
        return n;
    }

    if(dp[n] != 0) {
        return dp[n];
    }

    int ans = fibo(n - 1) + fibo(n - 2);
    return dp[n] = ans;
}

int fibo_bottom_up(int n) {
    vector<int> fib(1000, 0);
    fib[1] = 1;

    for(int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

//Bottom up with space optimization
int fibo_optimised(int n) {
    if(n == 1 || n == 0) {
        return n;
    }

    int a, b, c;
    a = 0, b = 1;
    for(int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}
signed main(){
    tsukuyomi
    int n;
    ip n;
    int ans = fibo_bottom_up(n);
    op ans << endl;
}