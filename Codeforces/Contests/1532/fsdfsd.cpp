#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
 
 
void solve(){
    int n;
    cin>>n;
    int a[n];
    int arr[2*n+1];
    for(int i=0;i<=2*n;i++)
        arr[i]=1e6;
    for(int i=0;i<n;i++){
        cin>>a[i];
        arr[a[i]]=i+1;
    }
    int ct=0;
    for(int i=3;i<2*n;i++){
        for(int j=1;j<=sqrt(i);j++){
            if(i%j==0 && i!=j*j){
                if(arr[j]+arr[i/j]==i){
                    ct++;
                }
            }
        }
    }
    cout<<ct<<endl;
}
 
int main(){
    FAST1;
    FAST2;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}