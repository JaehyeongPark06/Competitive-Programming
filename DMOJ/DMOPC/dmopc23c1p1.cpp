#include <bits/stdc++.h>
using namespace std;

int n, k;
int grid[2005][2005];

int main()
{
    cin >> n >> k;
    if (k > n)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            grid[i][i] = n * n - i;
        }

        int num = n * n - k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 0)
                {
                    grid[i][j] = num;
                    num--;
                }
            }
        }

        // print grid
        for (int i = 0; i < n; i++)
        {
            cout << grid[i][0];
            for (int j = 1; j < n; j++)
            {
                cout << " " << grid[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}