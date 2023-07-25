#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll n, k, s, ans = 0, next[10000];
    scanf("%lld %lld", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &s);
        next[i] = s;
    }
    for (int j = 1; j <= n; j++)
    {
        if (next[j] >= next[k] && next[j] > 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}