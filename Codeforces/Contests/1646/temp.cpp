#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define MOD 1000000007
 
int factorial(int n)
{
     if(n == 0)
          return 1;
    int i = n, fact = 1;
    while (n / i != n) {
        fact = fact * i;
        i--;
    }
    return fact;
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int num = 2;
        for(int i = 0; i < 100; i++) {
            op factorial(i) << ", ";
        } op endl;
    }
}
