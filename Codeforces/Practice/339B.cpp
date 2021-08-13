#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define int long long
signed main(){
    fast
    int n, m;
    ip n >> m;
    int time = 0;
    int start = 1;
    for(int i = 0; i < m; i++) {
        int temp; ip temp;
        time += (temp - start + n)%n;
        start = temp;
    }
    op time<<endl;
}