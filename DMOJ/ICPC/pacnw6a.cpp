#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int dp[26] = {0};
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int c = s[i] - 'a';
        dp[c] = 1;
        for (int j = 0; j < c; j++)
        {
            dp[c] = max(dp[c], dp[j] + 1);
        }
    }
    int ans = 26;
    for (int i = 0; i < 26; i++)
    {
        ans = min(ans, 26 - dp[i]);
    }
    cout << ans << endl;

    return 0;
}