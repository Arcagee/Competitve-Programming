#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a, m;
    m.push_back(-1);
    int l=0;
    for(int i=0; i<n; i++) {
        int e;
        cin >> e;
        a.push_back(e);
        //Binary search
        int low=1, high = l;
        while(low <= high) {
            int mid = (low+high)/2;
            if(a[m[mid]] < a[i]) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        if(low > l) {
            l++;
            m.push_back(i);
        } else {
            m[low] = i;
        }
    }
    cout << l;
    
    return 0;
}