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
        string s;
        ip s;
        vector<int> cnt(2, 0);
        n = s.size();
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0 && s[i] == '1') {
                cnt[0]++;
            } else if(i % 2 != 0 && s[i] == '1') {
                cnt[1]++;
            }
        }
        if(cnt[1] + cnt[0] == 10) {
            op 10 << endl;
            continue;
        }
        if(cnt[1] > cnt[0]) {
            vector<int> score(2, 0);
            int round = 0;
            for(int i = 0; i < n; i++) {
                if(score[1] - score[0] >= n - round) {
                    break;
                }
                if(i % 2 != 0 && s[i] == '?' or i % 2 != 0 && s[i] == '1') {
                    score[1]++;
                    round++;
                } else if(i % 2 == 0 && s[i] == '1') {
                    score[0]++;
                    round++;
                } else {
                    round++;
                }
            }

            op round << endl;
        } else {
            vector<int> score(2, 0);
            int round = 0;
            for(int i = 0; i < n; i++) {
                if(score[0] - score[1] >= n - round) {
                    break;
                }
                if(i % 2 == 0 && s[i] == '?' or i % 2 == 0 && s[i] == '1') {
                    score[0]++;
                    round++;
                } else if(i % 2 != 0 && s[i] == '1') {
                    score[1]++;
                    round++;
                } else {
                    round++;
                }
            }

            op round << endl;
        }
    }
}