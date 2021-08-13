#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    tsukuyomi
    int n;
    ip n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        ip a[i];
    }

    int pos1 = 0, pos2 = 0;
    bool flag = 0;

    for(int i = n - 1; i > 0; --i) {
        if(a[i] < a[i - 1] && flag == 0) {
            pos2 = i;
            flag = 1;
        } else if(a[i] > a[i - 1] && flag == 1) {
            pos1 = i;
            break;
        }
    }

    reverse(a.begin() + pos1, a.begin() + pos2 + 1);
    
    vector<int> k = a;
    sort(k.begin(), k.end());
    string ans = "yes";
    for(int i = 0; i < n; i++) {
        if(a[i] != k[i]) {
            ans = "no";
        }
        // op a[i] << " ";
    } op endl;

    op ans << endl;
    if(ans == "yes") {
        op pos1 + 1 << " " << pos2 + 1 << endl;
    }
}