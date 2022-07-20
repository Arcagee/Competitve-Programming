/* Author: ankush_kr */
#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
// #define int long long
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
 
// const int INF = 1e18;
// const int MOD = 1000000007;
 
unsigned long long int reverseDigits(int num)
{
    unsigned long long int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    for(int ii = 0; ii < t; ii++) {
        op "Case #" << ii + 1 << ": ";
        ip n;
        unsigned long long int sum = 0;
        unsigned long long int k = n;
        vector<unsigned long long int> a;  
        while(k > 0) {
            sum += k % 10;
            deb(sum);
            a.pb(k % 10);
            k /= 10;
        }
        unsigned long long int add = 0;
        while((sum + add) % 9 != 0) {
            add++;
        }
        // deb(add);
        deb(a);
        // reverse(a.begin(), a.end());
        int num = reverseDigits(n);
        deb(num);
        int cnt = 0;
        bool flag = 0;
        while(num > 0) {
            unsigned long long int val = num % 10;
            cnt++;
            if(add == 0 && add < val && cnt == 2) {
                flag = 1;
                op add << val;
                num /= 10;
                continue;
            } else if(add != 0 && add < val ) {
                flag = 1;
                op add << val;
            } else op val;
            num /= 10;
        } 
        if(flag == 0) op add;
        op endl;
        // if(add == 0) {
        //     for(unsigned long long int i = 0; i < a.size(); i++) {
        //         if(i == 1) {
        //             flag = 1;
        //             op add << a[i];
        //         } else op a[i];
        //     }
        //     if(flag == 0) op add;
        //     op endl;
        //     continue;
        // }
        // for(unsigned long long int i = 0;i < a.size(); i++) {
        //     if(a[i] > add && flag == 0) {
        //         flag = 1;
        //         op add << a[i];
        //     } else op a[i];
        // }

        // if(flag == 0) op add;
        // op endl;
    }
}