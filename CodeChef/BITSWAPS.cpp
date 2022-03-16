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
        bool flag = 0;
		string ans = "YES";
        for(int i = 0; i < n; i++) {
        	ip a[i];
        	
        	if(i != 0 && a[i] == 0) ans = "NO";
        }
		
		int counter = 0;        
        for(int i = 0; i < n - 1; i++) {
        	if(a[i] > a[i + 1]) {
        		counter++;
        	}
        	
        	if(counter > 2) ans = "NO";
        }
        
        op ans << endl;
        
    } 
        
}