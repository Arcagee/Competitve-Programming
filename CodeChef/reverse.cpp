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
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        ip n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            ip a[i];
        }
        
        vector<int> copy;
        copy = a;
        sort(copy.begin(), copy.end());
        
        int l, r;
        for(int i = 0; i < n; i++) {
            if(a[i] != copy[i]) {
                l = i;
                int curr = copy[i];
                while(curr != a[i]) {
                    i++;
                }
                r = i;
                break;
            }
        }
        
        while(l < r) {
            swap(a[l] , a[r]);
            l++; r--;
        }
        
        for(int i = 0; i < n; i++) {
            op a[i] << " ";
        } op endl;
    }
}