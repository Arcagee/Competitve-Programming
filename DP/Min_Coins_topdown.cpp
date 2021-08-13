// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int dp[1000001] = {0};
	
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
        if(V == 0) {
	        return 0;
	    }
	    
	    if(dp[V] != 0) {
	        return dp[V];
	    }
	    
	    int ans = 10000001;
	    
	    for(int i = 0; i < M; i++) {
	        if(V - coins[i] >= 0) {
	            ans = minCoins(coins, M, V - coins[i]);
	        }

            if(ans != 10000001) {
                ans = min(ans, minCoins(coins, M, V - coins[i]) + 1);
            } 
	    }
        
	    dp[V] = ans;
        
        return ans; 
	}
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends