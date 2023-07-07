#include <bits/stdc++.h>
using namespace std;

string W;
int R, C;
int wordLen;
char grid[100][100];

int result = 0;

void horizontal(int step, int dir, int r, int c, bool turned);
void vertical(int step, int dir, int r, int c, bool turned);
void diagonal(int step, int rowDir, int colDir, int r, int c, bool turned);

void horizontal(int step, int dir, int r, int c, bool turned)
{
    if (r < 0 || r >= R || c < 0 || c >= C)
        return;
    if (grid[r][c] == W[step])
    {
        if (step == wordLen - 1)
        {
            result++;
            return;
        }
        horizontal(step + 1, dir, r, c + dir, turned);
        if (!turned && step > 0)
        {
            vertical(step + 1, -1, r - 1, c, true);
            vertical(step + 1, 1, r + 1, c, true);
        }
    }
}

void vertical(int step, int dir, int r, int c, bool turned)
{
    if (r < 0 || r >= R || c < 0 || c >= C)
        return;
    if (grid[r][c] == W[step])
    {
        if (step == wordLen - 1)
        {
            result++;
            return;
        }
        vertical(step + 1, dir, r + dir, c, turned);
        if (!turned && step > 0)
        {
            horizontal(step + 1, -1, r, c - 1, true);
            horizontal(step + 1, 1, r, c + 1, true);
        }
    }
}

void diagonal(int step, int rowDir, int colDir, int r, int c, bool turned)
{
    if (r < 0 || r >= R || c < 0 || c >= C)
        return;
    if (grid[r][c] == W[step])
    {
        if (step == wordLen - 1)
        {
            result++;
            return;
        }
        diagonal(step + 1, rowDir, colDir, r + rowDir, c + colDir, turned);
        if (!turned && step > 0)
        {
            diagonal(step + 1, rowDir, colDir * -1, r + rowDir, c - colDir, true);
            diagonal(step + 1, rowDir * -1, colDir, r - rowDir, c + colDir, true);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> W >> R >> C;
    wordLen = W.length();
    for (int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            char letter;
            cin >> letter;
            grid[r][c] = letter;
        }
    }
    for (int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            horizontal(0, -1, r, c, false);
            horizontal(0, 1, r, c, false);
            vertical(0, -1, r, c, false);
            vertical(0, 1, r, c, false);
            diagonal(0, -1, -1, r, c, false);
            diagonal(0, -1, 1, r, c, false);
            diagonal(0, 1, -1, r, c, false);
            diagonal(0, 1, 1, r, c, false);
        }
    }
    cout << result << endl;
    return 0;
}