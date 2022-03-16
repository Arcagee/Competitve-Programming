// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        // Naive approach -> use a hashmap to store the first occurences of elements
        unordered_set<int> st;
        for(int i = 0, j = 0; i < n; i++) {
            if(st.find(arr[i]) == st.end()) {
                st.insert(arr[i]);
                arr[j] = arr[i];
                j++;
            } 
        }
        while(arr.size() != st.size()) arr.pop_back();
        return arr;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}
  // } Driver Code Ends