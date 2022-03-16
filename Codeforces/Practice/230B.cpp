/* Author: ankush_kr */
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
#define vpii vector<pair<int, int>>
#define mpii map<int, int>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define deb(x) cout << #x << " = " << x << endl
#define MOD 1000000007
// Sieve Problem
bool prime[1000005];
void SieveOfEratosthenes() {
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= 1000005; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 1000005; i += p)
                prime[i] = false;
        }
    }
 
}
 

signed main() {
    tsukuyomi
    int t = 1, n;
    SieveOfEratosthenes();
    cin >> t;
    while(t--) {
        ip n;
        int num = sqrt(n);
        if(num * num == n && num > 1) {
            if(prime[num])
                op "YES" << endl;
            else op "NO" << endl;
        } else op "NO" << endl;
    }
}