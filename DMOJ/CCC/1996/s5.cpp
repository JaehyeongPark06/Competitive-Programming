#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

const int MXM = 1e5 + 2;

int main()
{
    int t, n, x[MXM], y[MXM];
    map<int, int> first;
    cin >> t;
    while (t--)
    {
        memset(x, 0, sizeof(x));
        memset(y, 0, sizeof(y));
        first.clear();
        cin >> n;
        for (int i = n - 1; i >= 0; i--)
        {
            cin >> x[i];
            if (!first.contains(x[i]))
                first[x[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int ind = upper_bound(x, x + n, y[i]) - x - 1;
            if (ind >= n)
                continue;

            ans = max(ans, i - ((n - 1) - first[x[ind]]));
        }
        cout << "The maximum distance is " << ans << endl;
    }
    return 0;
}