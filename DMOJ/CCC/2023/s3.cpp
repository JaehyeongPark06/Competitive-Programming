#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int N, M, R, C;
    cin >> N >> M >> R >> C;
    bool FLAG = true;
    bool ROTATED = false;
    if (C == 0 || C == M)
    {
        swap(N, M);
        swap(R, C);
        ROTATED = true;
    }
    vector<vector<char>> board(N, vector<char>(M, 'a'));
    if (R == 0)
    {
        for (int x = 0; x < N; x++)
            board[x][M - 1] = 'b';
        for (int x = 0; x < M - C; x++)
            board[N - 1][M - 1 - x] = board[N - 1][M - 1 - x] + 1;
    }
    else if (R == N)
    {
        if (C % 2 != M % 2)
        {
            if (M % 2 == 0)
            {
                cout << "IMPOSSIBLE" << endl;
                FLAG = false;
            }
            else
            {
                for (int x = 0; x < M; x++)
                    board[0][x] = 'b';

                for (int x = 1; x <= C / 2; x++)
                {
                    board[0][M / 2 - x] = 'a';
                    board[0][M / 2 + x] = 'a';
                }

                board[0][M / 2] = 'b';
            }
        }
        else
        {
            for (int x = 0; x < (M - C) / 2; x++)
            {
                board[0][x] = 'b';
                board[0][M - 1 - x] = 'b';
            }
        }
    }
    else
    {
        for (int x = R; x < N; x++)
        {
            for (int y = C; y < M; y++)
            {
                board[x][y] = 'b';
            }
        }
    }
    if (FLAG)
    {
        if (ROTATED)
        {
            for (int i = 0; i < M; i++)
            {
                for (int j = N - 1; j >= 0; j--)
                {
                    cout << board[j][i];
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    cout << board[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}