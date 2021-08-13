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
        vector<pair<int, int>> a;
        for(int i = 0; i < n; i++) {
            int x, y; ip x >> y;
            a.push_back({x, y});
        }
        string ans = "YES";
        int play = 0, clear = 0;
        for(int i = 0; i < n; i++) {
            if(a[i].first < play or a[i].second < clear or a[i].second - clear > a[i].first - play) {
                ans = "NO";
                break;
            }
            play = a[i].first;
            clear = a[i].second;
        }

        op ans << endl;
    }
}