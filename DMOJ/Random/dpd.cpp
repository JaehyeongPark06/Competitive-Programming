#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> items(n);

    for (int i = 0; i < n; i++)
        cin >> items[i].first >> items[i].second;

    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - items[i - 1].first >= 0)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - items[i - 1].first] + items[i - 1].second);
            }
        }
    }

    cout << dp[n][w] << endl;

    return 0;
}