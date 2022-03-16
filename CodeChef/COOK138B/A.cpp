// C++ program to find maximum sum path
#include <iostream>
using namespace std;

// Utility function to find maximum of two integers
int max(int x, int y) { return (x > y) ? x : y; }

// This function returns the sum of elements on maximum path
// from beginning to end
int maxPathSum(int A[], int B[], int l1, int l2)
    {
    
        //Your code here
        int result = 0, i = 0, j = 0, sum1 = 0, sum2 = 0;
        while(i < l1 && j < l2) {
            if(A[i] < B[j]) 
                sum1 += A[i++];
            else if(A[i] > B[j])
                sum2 += B[j++];
            else {
                result += max(sum1, sum2) + A[i];
                sum1 = 0; sum2 = 0;
                i++;
                j++;
            }
        }
        
        // Add the remaining elements 
        while(i < l1) sum1 += A[i++];
        while(j < l2) sum2 += B[j++];
        
        return result + max(sum1, sum2);
    }

// Driver code
int main()
{
    int ar1[] = {2,3,7,10,12};
    int ar2[] = {1,5,7,8};
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
  
    // Function call
    cout << "Maximum sum path is "
         << maxPathSum(ar1, ar2, m, n);
    return 0;
}