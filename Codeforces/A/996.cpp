#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dp[5] = {0};
    int ans = 0;
    while (n > 0)
    {
        if (n >= 100)
        {
            n -= 100;
            dp[0]++;
        }
        else if (n >= 20)
        {
            n -= 20;
            dp[1]++;
        }
        else if (n >= 10)
        {
            n -= 10;
            dp[2]++;
        }
        else if (n >= 5)
        {
            n -= 5;
            dp[3]++;
        }
        else
        {
            n -= 1;
            dp[4]++;
        }
    }
    for (int i = 0; i < 5; i++)
        ans += dp[i];
    cout << ans << endl;
    return 0;
}