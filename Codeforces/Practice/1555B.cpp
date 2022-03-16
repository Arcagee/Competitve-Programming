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
 
signed main() {
    tsukuyomi
    int t, n;
    cin >> t;
    while(t--) {
        int W, H;
        ip W >> H; // width and height of the room
        int x1, y1, x2, y2;
        ip x1 >> y1 >> x2 >> y2; // Coordinates first table
        int w, h;
        ip w >> h; // Width and height of second

        if(H - (y2 - y1) >= h || W - (x2 - x1) >= w) {
            int res1 = INT_MAX, res2 = INT_MAX;
            if(H - (y2 - y1) >= h) {
                int top = H - y2;
                int bot = y1;
                if(top >= h || bot >= h) {
                    res1 = 0;
                } else {
                    res1 = min(h - top, h - bot);
                }
            } 

            if(W - (x2 - x1) >= w) {
                int right = W - x2;
                int left = x1;
                if(right >= w || left >= w) {
                    res2 = 0;
                } else {
                    res2 = min(w - right, w - left);
                }
            }
            op min(res1, res2) << endl;
        } else {
            op -1 << endl;
        }

    }
}