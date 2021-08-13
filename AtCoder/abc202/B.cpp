#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    
    // 0 1 6 8 9
    string s;
    ip s;
    int len = s.size();
    for(int i=len-1; i>=0; i--){
        if(s[i] == '6'){
            s[i] = '9';
        } else if(s[i] == '9'){
            s[i] = '6';
        }
        op s[i];
    } op endl;
} 