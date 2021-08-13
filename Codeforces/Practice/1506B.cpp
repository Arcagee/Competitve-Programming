#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        int k;
        ip n>>k;
        string s;
        ip s;
        vector<int> pos;
        for(int i = 0; i < n; i++){
            if(s[i] == '*'){
                pos.push_back(i);
            }
        }
        if(pos.size() == 1) {
            op 1<<endl;
        } else if(pos.size() == 2){
            op 2<<endl;
        } else {
            int first = pos[0];
            int len = pos.size();
            int cnt = 2;
            for(int i = 0; i < len; i++) {
                if(pos[i] - first > k) {
                    cnt++;
                    // We put the star at i - 1 position because if we
                    // put it at i it the difference will remain the same.
                    first = pos[i - 1];
                }
            }
            op cnt<<endl;
        }
    }
}