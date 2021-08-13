#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n;
    ip n;
    map<int, string> mp;
    for(int i = 0; i<n; i++){
        int a; string s;
        ip s; ip a;
        mp.insert({a, s});
    }
    map<int, string> ::reverse_iterator it;
    int cnt = 0;
    for(it = mp.rbegin(); it!=mp.rend(); it++){
        if(cnt == 1){
            op (*it).second<<endl;
            break;
        } else{
            cnt++;
        }
    }
}