#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    for (int i = 0; i <= w; i++)
    {
        n -= i * k;
    }
    if (n < 0)
    {
        cout << abs(n) << endl;
    }
    else
    {
        cout << 0 << endl;
        return 0;
    }
    return 0;
}