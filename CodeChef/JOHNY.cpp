#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k;
    int A[101];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        cin>>k;
        int key= A[k-1];
        sort(A, A+n);
        
        for(int i=0; i<n; i++){
            if(A[i]==key){
                cout<<i+1<<endl;
            }
        }
    }
}