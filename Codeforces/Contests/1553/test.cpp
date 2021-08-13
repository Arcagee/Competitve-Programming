#include <bits/stdc++.h>
using namespace std;

# define TLEseBacho             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
# define int                    long long int
# define printList(arr)         for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
# define inputList(arr)         for(int i=0;i<arr.size();i++){cin>>arr[i];}
# define itr(i,n)               for(i;i < n;i++)
# define vi                     vector<int>
# define vb                     vector<bool>
# define vc                     vector<char>
# define vp                     vector<pair<int,int>>
# define vvi                    vector<vector<int>>
# define vvc                    vector<vector<char>>
# define add                    push_back
# define pqs                    priority_queue<int, vi, greater<int>()>
# define pqb                    priority_queue<int>
# define modb                   1000000007
# define mods                   -1000000007
# define inf                    1e18
# define br                     "\n"
# define endit                  cout << br;
# define sortI(arr)             sort(arr.begin(), arr.end());
# define sortD(arr)             sort(arr.begin(), arr.end(), greater<int>());
# define sortC(arr, compare)    sort(arr.begin(), arr.end(), compare);

int getN(int sum) {
	sum = sum * 8;
	sum = sqrt(sum + 1) - 1;
	sum /= 2;
	return sum;
}

int apSum(int n) {
	int a = 1, d = 1;
	int res = (2 * a + (n - 1) * d) * n; res /= 2; return res;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

bool isPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)return false;
	}
	return true;
}





void solveKaro() {

	string st1, st2;
	cin >> st1 >> st2;
	int n = st1.length();
	int m = st2.length();

	bool res = false;

	for (int i = 0; i < n; i++) {

		if (st1[i] == st2[0]) {

			int k = 0, j = i;
			for (; j < n; j++) {
				if (k >= m || st1[j] != st2[k]) {
					break;
				}
				k += 1;
			}
			j -= 2;
			for (; j >= 0; j--) {
				if (k >= m || st1[j] != st2[k]) {
					break;
				}
				k += 1;
			}
			// cout << k << endl;
			if (k == m) {
				res = true;
				break;
			}
		}
	}
	if (res) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
}

int32_t main() {

	TLEseBacho;
	int tCase = 1;

	cin >> tCase;

	while (tCase--) {

		solveKaro();

	}
}

