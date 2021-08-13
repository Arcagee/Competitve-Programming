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
        if(n > 45) {
            op "-1" << endl;
            continue;
        }
        if(n <= 9) {
            op n << endl;
            continue; 
        }
        int num = 9;
        vector<int> ans;
        while(n > 0) {
            n -= num;
            ans.push_back(num);
            if(n <= num - 1) {
                num = n;
            } else {
                num--;
            }
        }

        for(int i = ans.size() - 1; i >= 0; --i) {
            op ans[i];
        } op endl;
    }
}