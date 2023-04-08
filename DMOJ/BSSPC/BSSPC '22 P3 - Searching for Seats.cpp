#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        grid[x - 1][y - 1] = 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
                continue;
            int cnt = 0;
            for (int x = -1; x <= 1; x++)
            {
                for (int y = -1; y <= 1; y++)
                {
                    if (x == 0 && y == 0)
                        continue;
                    if (i + x < 0 || i + x >= n || j + y < 0 || j + y >= m)
                        continue;
                    if (grid[i + x][j + y] == 1)
                        cnt++;
                }
            }
            if (cnt >= 3)
                ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}