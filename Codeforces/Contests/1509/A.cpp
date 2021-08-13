#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        vector<int> odd;
        vector<int> even;
        for(int i = 0; i < n; i++) {
            int x;
            ip x;
            if(x % 2 == 0) even.push_back(x);
            else odd.push_back(x);
        }

        for(int i = 0; i < odd.size(); i++) {
            op odd[i] << " " ;
        }

        for(int i = 0; i < even.size(); i++) {
            op even[i] << " ";
        }

        op endl;
    }
}