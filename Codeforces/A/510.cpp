#include <bits/stdc++.h>
using namespace std;

const int MXM = 100;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            row.push_back(0);
        }
        grid.push_back(row);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                grid[i][j] = 1;
            }
        }
        else
        {
            if (i % 4 == 1)
            {
                grid[i][m - 1] = 1;
            }
            else
            {
                grid[i][0] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j : grid[i])
        {
            if (j == 1)
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}