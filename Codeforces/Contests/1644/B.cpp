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
 
void rotateArray(vector<int> &a, int n) {
    int end = a[0];
    for(int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = end;
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        ip n;
        vector<int> v;
        for(int i = n; i >= 1; --i) {
            v.push_back(i);
        }

        for(int i = 0; i < n; i++) {
            if(i == 1 && n == 3) {
                swap(v[1], v[2]);
            }
            for(int j = 0; j < n; j++) {
                op v[j] << " ";
            } op endl;
            rotateArray(v, n);
        }
    }
}