class Solution {
    public: 

    int missingNumber(int a[], int n) {
        // What this approach does is that we place the number 
        // at num - 1 position and then traverse the array and 
        // if a number is not at the position num - 1 then that 
        // is the first missing positive number
        // ** Ignore numbers larger than n and -ve

        for(int i = 0; i < n; i++) {
            if(a[i] <= n && a[i] > 0) {
                while(a[i] <= n && a[i] > 0 && a[i] != a[a[i] - 1]) {
                    swap(a[i], a[a[i] - 1]);
                }
            }
        }

        for(int i = 0; i < n; i++) {
            if(a[i] != i + 1) {
                return i + 1;
            } 
        }

        return n + 1;
    }
}