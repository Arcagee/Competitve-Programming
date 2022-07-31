#include <bits/stdc++.h>
using namespace std;

string update(string s){
 
  string newString = "#";
  for(auto ch : s){
    newString += ch;
    newString += "#";
  }
  return newString;
}
 
int lps(string s){
 
  s = update(s);
  vector<int> dp(s.length());
  int C = 0;
  int R = 0;
 
  for (int i = 0 ; i < s.length() ; i++){
    int imir = 2 * C - i;
    if (R > i){
      dp[i] = min(R-i, dp[imir]);
    }
    else{
      dp[i] = 0;
    }
 
    while( ((i + 1 + dp[i]) < s.length()) && ((i - 1 - dp[i]) >= 0) && s[i + 1 + dp[i]] == s[i - 1 - dp[i]]){
      dp[i] += 1;
    }
    if (i + dp[i] > R){
      C = i;
      R = i + dp[i];
    }
  }
 
  int r = 0, c = -1;
  for(int i = 0 ; i < s.length() ; i++){
    r = max(r, dp[i]);
    if(r == dp[i]){
      c = i;
    }
  }
  return r;
}
cpp


int lis(vector<int> &arr, int n) {
    vector<int> lis;
    int len = 1;
    lis.push_back(arr[0]);
    for(int i = 1; i < n; i++) {
        if(arr[i] >= lis.back()) {
            lis.push_back(arr[i]);
            len++;
        } else {
            int idx = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
            lis[idx] = arr[i];
        }
    }

    return len;
}

int LISPS(int n, vector<string> v) {
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int len = lps(v[i]);
        arr.push_back(len);
    }

    int val = lis(arr, n);

    return val;
}

int main() {
    vector<int> arr;
    int n = 3;
    vector<string> v = {"a", "aac", "aba"};
    cout << LISPS(n, v);
}