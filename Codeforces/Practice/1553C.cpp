#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define MOD 1000000007
 
int solve(string s, int n) {
    vi chance(2, 5), score(2, 0);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0 && s[i] == '1') {
            score[0]++;
            chance[0]--;
            if(score[0] > score[1] && score[0] > score[1] + chance[1]) {
                return (10 - chance[0] - chance[1]);
            }
        } else if(i % 2 != 0 && s[i] == '1') {
            score[1]++;
            chance[1]--;
            if(score[1] > score[0] && score[1] > score[0] + chance[0]) {
                return 10 - chance[1] - chance[0];
            }
        } else {
            chance[i % 2]--;
            if(score[0] > score[1] && score[0] > score[1] + chance[1]) {
                return (10 - chance[0] - chance[1]);
            }

            if(score[1] > score[0] && score[1] > score[0] + chance[0]) {
                return 10 - chance[1] - chance[0];
            }

        }
    }

    return 10;
}

int predictMoves(string s, int n) {
    string a = s, b = s;
    for(int i = 0; i < n; i++) {
        if(s[i] == '?' && i % 2 == 0) {
            a[i] = '1'; b[i] = '0';
        } 
        if(s[i] == '?' && i % 2 != 0) {
            b[i] = '1'; a[i] = '0';
        } 
    }
    
    int ans = min(solve(a, n), solve(b, n));
    return ans;
}

signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        string s;
        ip s;
        op predictMoves(s, s.size()) << endl;
    }
}