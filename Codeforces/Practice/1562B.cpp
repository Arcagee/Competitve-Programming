#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ip cin >>
#define op cout <<
#define pb push_back
#define endl "\n"
#define int long long
vector<bool> prime(100);

void solve()
{
    string s;
    int k;
    ip k >> s;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '9' || s[i] == '8')
        {
            op 1 << endl;
            op s[i] << endl;
            return;
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (!prime[(s[i] - '0') * 10 + s[j] - '0'])
            {
                op 2 << endl;
                op s[i] << s[j] << endl;
                return;
            }
        }
    }
}

signed main()
{
    tsukuyomi

        for (int i = 2; i < 100; i++)
    {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime[i] = false;
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}