/**
 * MESSY SOLUTION
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int R, C;
    cin >> R >> C;
    char patch[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> patch[i][j];
        }
    }
    int A, B;
    cin >> A >> B;
    int V = 0;
    if (patch[A][B] == 'S')
    {
        V += 1;
    }
    else if (patch[A][B] == 'M')
    {
        V += 5;
    }
    else if (patch[A][B] == 'L')
    {
        V += 10;
    }
    patch[A][B] = 'X';
    queue<pair<int, int>> q;
    q.push({A, B});
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        if (x - 1 >= 0 && patch[x - 1][y] != '*' && patch[x - 1][y] != 'X')
        {
            if (patch[x - 1][y] == 'S')
            {
                V += 1;
            }
            else if (patch[x - 1][y] == 'M')
            {
                V += 5;
            }
            else if (patch[x - 1][y] == 'L')
            {
                V += 10;
            }
            patch[x - 1][y] = 'X';
            q.push({x - 1, y});
        }
        if (x + 1 < R && patch[x + 1][y] != '*' && patch[x + 1][y] != 'X')
        {
            if (patch[x + 1][y] == 'S')
            {
                V += 1;
            }
            else if (patch[x + 1][y] == 'M')
            {
                V += 5;
            }
            else if (patch[x + 1][y] == 'L')
            {
                V += 10;
            }
            patch[x + 1][y] = 'X';
            q.push({x + 1, y});
        }
        if (y - 1 >= 0 && patch[x][y - 1] != '*' && patch[x][y - 1] != 'X')
        {
            if (patch[x][y - 1] == 'S')
            {
                V += 1;
            }
            else if (patch[x][y - 1] == 'M')
            {
                V += 5;
            }
            else if (patch[x][y - 1] == 'L')
            {
                V += 10;
            }
            patch[x][y - 1] = 'X';
            q.push({x, y - 1});
        }
        if (y + 1 < C && patch[x][y + 1] != '*' && patch[x][y + 1] != 'X')
        {
            if (patch[x][y + 1] == 'S')
            {
                V += 1;
            }
            else if (patch[x][y + 1] == 'M')
            {
                V += 5;
            }
            else if (patch[x][y + 1] == 'L')
            {
                V += 10;
            }
            patch[x][y + 1] = 'X';
            q.push({x, y + 1});
        }
    }
    cout << V << endl;
    return 0;
}
*/

// CLEANER

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int R, C;
    cin >> R >> C;
    char patch[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> patch[i][j];
        }
    }
    int A, B;
    cin >> A >> B;

    unordered_map<char, int> vals = {{'S', 1}, {'M', 5}, {'L', 10}};

    int V = 0;
    if (vals.find(patch[A][B]) != vals.end())
    {
        V += vals[patch[A][B]];
    }
    patch[A][B] = '*';

    queue<pair<int, int>> q;
    q.push({A, B});
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;

        const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (const auto &dir : directions)
        {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (nx >= 0 && nx < R && ny >= 0 && ny < C && patch[nx][ny] != '*')
            {
                if (vals.find(patch[nx][ny]) != vals.end())
                {
                    V += vals[patch[nx][ny]];
                }
                patch[nx][ny] = '*';
                q.push({nx, ny});
            }
        }
    }
    cout << V << endl;
    return 0;
}