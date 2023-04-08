#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x;
        cin >> x;
        long long ans = 0;
        for (long long i = 1; i <= 1000000; i++)
        {
            if ((i > x) && (i * i * i % 1000) == 888)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}