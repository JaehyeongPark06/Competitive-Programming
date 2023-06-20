#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int board[n + 1][n + 1];
    vector<pair<int, int>> qCoords;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        qCoords.push_back(make_pair(x, y));
    }
    int cells = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            board[i][j] = 1;
        }
    }
    // check if queen is in the same row, column, or diagonal
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (qCoords[k].first == i)
                {
                    board[i][j] = 0;
                }
                else if (qCoords[k].second == j)
                {
                    board[i][j] = 0;
                }
                else if (abs(qCoords[k].first - i) == abs(qCoords[k].second - j))
                {
                    board[i][j] = 0;
                }
            }
        }
    }
    // count the number of cells that are not attacked by the queen
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (board[i][j] == 1)
            {
                cells++;
            }
        }
    }
    cout << cells << endl;
    return 0;
}