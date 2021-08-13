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
            vector<int> a(n), b(n);
            int tola = 0, tolb = 0;
            for(int i = 0; i < n; i++) {
                ip a[i];
            }
            sort(a.begin(), a.end());
            for(int i = 0; i < n; i++) {
                ip b[i];
            }
            sort(b.begin(), b.end());
            int cnt = 0;
            int lim = n/4;
            // op lim << " ";
            int sum1 = 0, sum2 = 0;
            for(int i = lim; i < n; i++) {
                sum1 += a[i];
                sum2 += b[i];
            }
            // op sum1 << " " << sum2 << endl;
            if(sum1 >= sum2) {
                op 0 << endl;
                continue;
            } 
            int x = lim, size = n, y = lim - 1, zero = 0;
            while(true) {
                if(sum1 >= sum2) {
                    break;
                }
                size++;
                zero++;
                if(size/4 > lim) {
                    lim = size/4;
                    sum1 -= a[x];
                    x++;
                    if(zero < lim) {
                        y++;
                        sum2 -= b[y];
                    }
                    // op sum1 << " " << sum2 << " ";
                }
                sum1 += 100;
                if(y >= 0) {
                        sum2 += b[y];
                        y--;
                }
                cnt++;
                
            }
            
            op cnt << endl;
        }
    }