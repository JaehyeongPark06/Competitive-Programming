#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    vector<int> rows(m + 1, 0), cols(n + 1, 0);
    char rc;
    int val;
    for (int i = 0; i < k; i++)
    {
        cin >> rc >> val;
        if (rc == 'R')
        {
            rows[val] += 1;
        }
        else
        {
            cols[val] += 1;
        }
    }
    int count = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((rows[i] + cols[j]) % 2 == 1)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}