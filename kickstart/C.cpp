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
 
 
/*----------------------------------- Debugging ----------------------------------- */
void __print(int x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << x;}
void __print(const string &x) {cerr << x;}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
 
const int INF = 1e18;
const int MOD = 1000000007;
 
vector<int> powten = {10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000, 100000000000, 1000000000000};
 
vi calcSP(int n) {
    int sum = 0;
    int prod = 1;
    while(n > 0) {
        sum += n % 10;
        prod *= n % 10;
        n /= 10;
    }

    return {sum, prod};
} 

int Cprod (int n) {
    int prod = 1;
    while(n > 0) {
        prod *= n % 10;
        n /= 10;
    }
    return prod;
}

int Csum (int n) {
    int prod = 0;
    while(n > 0) {
        prod += n % 10;
        n /= 10;
    }
    return prod;
}

int factor(int n, int k) {
    n /= k;
    return Cprod(n);
}

signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    for(int ii = 0; ii < t; ii++) {
        op "Case #" << ii + 1 << ": ";
        int k; ip n >> k;
        vi a = calcSP(n);
        int sum = a[0], prod = a[1], cnt = 0;
        int fact = factor(n, 10);
        if(prod % sum == 0) cnt++;
        // deb(sum, prod, fact);
        // sum++;
        // prod += fact;
        for(int i = n + 1; i <= k; i++) {
            if(i % 10 == 0 && find(powten.begin(), powten.end(), i) == powten.end()) {
                // if(prod % sum == 0) cnt++;
                prod = Cprod(i);
                fact = factor(i, 10);
                sum = Csum(i);
                // deb(sum, i, fact);
                cnt++;
                // deb(i, cnt);
            } else if(find(powten.begin(), powten.end(), i) != powten.end()) {
                cnt++;
                sum = 1;
                prod = 0;
                fact = factor(i, 10);
                deb(i, cnt);
            } else {
                sum++;
                if(i > 9)
                    prod += fact;
                else prod = sum;
                
                if(prod % sum == 0){ cnt++;deb(sum, prod, fact, i); }
            }
            // deb(cnt);
        }

        op cnt << endl;
    }
}