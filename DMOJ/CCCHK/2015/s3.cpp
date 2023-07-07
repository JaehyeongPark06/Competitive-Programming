#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            cin >> matrix[i][j];
        }
    }
    map<int, pair<int, int>> crosses;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int max = min(min(i, r - i - 1), min(j, c - j - 1));

            int count = 0;

            for (int k = 1; k <= max; k++)
            {
                if (matrix[i][j - k] != matrix[i - k][j] || matrix[i - k][j] != matrix[i][j + k] || matrix[i][j + k] != matrix[i + k][j] || matrix[i + k][j] != matrix[i][j - k])
                {
                    break;
                }
                count++;
            }
            pair<int, int> coords = make_pair(i + 1, j + 1);
            crosses[count] = coords;
            count = 0;
        }
    }
    cout << crosses.rbegin()->first << ' ' << crosses.rbegin()->second.first << ' ' << crosses.rbegin()->second.second;
    return 0;
}