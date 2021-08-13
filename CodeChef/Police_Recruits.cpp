    #include <bits/stdc++.h>
    using namespace std;
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ip cin>>
    #define op cout<<
    #define int long long
    signed main(){
        fast
        int n;
        ip n;
        vector<int> a(n);
        int crimecnt=0;
        for(int i=0; i<n; i++){
            ip a[i];
            if(a[i]<0) crimecnt++;
        }
        int temp=0, cnt=0, ans=0;
        for(int i=0; i<n; i++){
            if(a[i]>0){
                temp+=a[i];
            } else if(a[i]<0){
                if(temp==0) ans++;
                else temp--;
            }
        }
        op ans<<endl;
    }