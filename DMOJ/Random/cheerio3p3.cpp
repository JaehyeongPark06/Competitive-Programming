#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> every;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int l = n, k = -1;
    for (int i = 3; i <= n - 3; i++)
    {
        if (ceil((2.0 * i * i + n) / (2.0 * i + 1)) < l)
        {
            k = i;
            l = ceil((2.0 * i * i + n) / (2.0 * i + 1));
        }
    }
    cout << l << endl;
    for (int i = 1; i <= k; i++)
        every.push_back(i);
    for (int i = 2 * k + 1; i <= n; i += 2 * k + 1)
        every.push_back(i);
    if (every.back() + k < n)
        every.push_back(every.back() + k);
    for (int i = 0; i < every.size(); i++)
    {
        cout << every[i];
        if (i != every.size() - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}