#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'W')
            {
                if (i - 1 >= 0 && grid[i - 1][j] == '.')
                {
                    grid[i - 1][j] = 'C';
                }
                if (i + 1 < n && grid[i + 1][j] == '.')
                {
                    grid[i + 1][j] = 'C';
                }
                if (j - 1 >= 0 && grid[i][j - 1] == '.')
                {
                    grid[i][j - 1] = 'C';
                }
                if (j + 1 < m && grid[i][j + 1] == '.')
                {
                    grid[i][j + 1] = 'C';
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}