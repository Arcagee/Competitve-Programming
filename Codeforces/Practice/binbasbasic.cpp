#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define MOD 1000000007
 
bool isPal(string s) {
    int low = 0, high = s.size() - 1;
    while(low < high) {
        if(s[low] != s[high]) return false;
        low++;
        high--;
    }

    return true;
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int k; ip n >> k;
        string s;
        ip s;
        if(n == 1) {
            op "YES" << endl;  
            continue;
        } 
        int front = 0, back = n - 1, count = 0;
        while(front < back) {
            if(s[front] != s[back]) {
                s[back] = s[front];
                count++;
            }
            front++;
            back--;
        }

        if(count <= k) {
            if(isPal(s)) {
                if(n % 2 != 0 && (count - k) % 2 != 0) {
                    op "YES" << endl;
                } else if((count - k) % 2 == 0) {
                    op "YES" << endl;
                } else {
                    op "NO" << endl;
                }
            }
        } else {
            op "NO" << endl;
        }
    }
}