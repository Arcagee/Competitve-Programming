#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    string s;
    ip s;
    // Now we will calculate all possible combinations of passwords as the password
    // is 4 digits long the valid passwords will be between 0000 and 9999
    int ans = 0;
    for(int i = 0; i < 10000; i++){
        vector<bool> flag(10);
        int temp = i;
        for(int j = 0; j < 4; j++){
            flag[temp % 10] = true;
            temp /= 10;
        }
        int flag2 = 1;
        // We will only add the valid passwords into our answer and the invalid ones will be zero hence 
        // the count will only contain the count of valid passwords.
        for(int i = 0; i < 10; i++){
            if(s[i] == 'o' && flag[i] == false){
                flag2 = 0;
            } 
            if(s[i] == 'x' && flag[i] == true){
                flag2 = 0;
            } 
        }
        ans += flag2;
    }
    op ans<<endl;
}