#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int dp[t + 1];
    for (int i = 0; i <= t; i++)
    {
        dp[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = t; j >= b[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - b[i]] + a[i]);
        }
    }
    cout << dp[t] << endl;
    return 0;
}