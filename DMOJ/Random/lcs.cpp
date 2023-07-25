#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> s1(N), s2(M);
    for (int i = 0; i < N; i++)
    {
        cin >> s1[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> s2[i];
    }
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    for (int m = 1; m <= N; m++)
    {
        for (int n = 1; n <= M; n++)
        {
            if (s1[m - 1] == s2[n - 1])
            {
                dp[m][n] = dp[m - 1][n - 1] + 1;
            }
            else
            {
                dp[m][n] = max(dp[m - 1][n], dp[m][n - 1]);
            }
        }
    }
    cout << dp[N][M] << endl;
    return 0;
}
