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
#define deb(x) cout << #x << ' = ' << x << endl
#define MOD 1000000007


string fun1(int &n) {
    string ans;
    while(n > 0) {
        n -= 1;
        ans += '1';
        if(n <= 0) break;
        n -= 2;
        if(n <= 0) break;
        ans += '2';
    }
    return ans;
}

string fun2(int &n) {
    string ans;
        while(n > 0) {
            n -= 2;
            ans += '2';
            if(n <= 0) break;
            n -= 1;
            ans += '1';
            if(n <= 0) break;
        }
    return ans;
}

signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        ip n;
        int sum = 0;
        if(n <= 2) {
            op n << endl;
            continue;
        }

        int temp = n;
        string ans1 = fun1(n), ans2 = fun2(temp);
        // op n << " " << temp << endl;
        if(n == 0 && temp == 0) {
            if(ans2.size() > ans1.size()) op ans2 << endl;
            else op ans1 << endl;
        } else if(n == 0) {
            op ans1 << endl;
        } else op ans2 << endl;


    }
}