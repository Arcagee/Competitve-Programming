#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    string time;

    ip time;

    string temp = (time.substr(0, 2));
    int h = stoi(temp);
    string temp2 = time.substr(3, 5);
    int m = stoi(temp2);

    double ans = floor((h + m)/22);

    op ans << endl;
}