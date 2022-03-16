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

vi fact = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200, 1307674368000, 20922789888000, 355687428096000, 6402373705728000, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648, 4294967296, 8589934592, 17179869184, 34359738368, 68719476736, 137438953472, 274877906944, 549755813888, 1099511627776, 2199023255552, 4398046511104, 8796093022208, 17592186044416, 35184372088832, 70368744177664, 140737488355328, 281474976710656, 562949953421312, 1125899906842624, 2251799813685248, 4503599627370496, 9007199254740992, 18014398509481984, 36028797018963968, 72057594037927936, 144115188075855872, 288230376151711744, 576460752303423488, 1152921504606846976, 2305843009213693952};
signed main() {
    tsukuyomi
    int t, n;
    sort(fact.begin(), fact.end());
    cin >> t;
    while(t--) {
        ip n;
        if(find(fact.begin(), fact.end(), n) != fact.end()) {
            op "1\n"; continue;
        }

        if(n % 2 != 0) {
            int cnt = 1;
            int idx = lower_bound(fact.begin(), fact.end(), n) - fact.begin();
            n -= 1;
            int ans = INT32_MAX;
            for(int i = 1; i <= idx; i++) {
                if(fact[i] == n) {
                    ans = 2;
                    break;
                }
                int sum = fact[i];
                cnt++;
                for(int j = i + 1; j <= idx; j++) {
                    sum += fact[j];
                    cnt++;
                    if(sum == n) {
                        ans = min(ans, cnt);
                        break;
                    } else if(sum > n) {
                        break;
                    }
                }
                cnt = 1;
            }
            if(ans == INT32_MAX) op -1 << endl;
            else op ans << endl;
        } else if(n % 2 == 0) {
            int cnt = 0;
            int ans = INT32_MAX;
            int idx = lower_bound(fact.begin(), fact.end(), n) - fact.begin();
            for(int i = 1; i <= idx; i++) {
                if(fact[i] == n) {
                    ans = 1;
                    break;
                } 
                int sum = fact[i];
                cnt++;
                for(int j = i + 1; j <= idx; j++) {
                    sum += fact[j];
                    cnt++;
                    if(sum == n) {
                        ans = min(ans, cnt);
                        break;
                    } else if(sum > n) break;
                }
                cnt = 0;
            }
            if(ans == INT32_MAX) op -1 << endl;
            else op ans << endl;

        }
    }
}