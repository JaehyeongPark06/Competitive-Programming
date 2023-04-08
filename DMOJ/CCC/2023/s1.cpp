#include <bits/stdc++.h>
using namespace std;

const int MXM = 2e5 + 1;
bool wet[2][MXM] = {{false}};
int C;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> C;

    int t;
    int tc = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> t;
            if (t == 1)
            {
                wet[i][j] = true;
                tc++;
            }
        }
    }

    int ans = tc * 3;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (wet[i][j])
            {
                if (j != 0)
                {
                    if (wet[i][j - 1])
                        ans--;
                }
                if (j != C - 1)
                {
                    if (wet[i][j + 1])
                        ans--;
                }
                if (j % 2 == 0)
                {
                    if (i == 0)
                    {
                        if (wet[i + 1][j])
                            ans--;
                    }
                    else
                    {
                        if (wet[i - 1][j])
                            ans--;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}