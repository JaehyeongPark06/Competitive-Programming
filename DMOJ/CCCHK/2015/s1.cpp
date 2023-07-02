#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

const int MOD = 1e9 + 7;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0, j = n - 1; i < j; i++)
    {
        while (i < j && v[i] + v[j] > m)
            j--;
        ans += j - i;
    }
    if (ans > MOD)
        cout << ans % MOD << endl;
    else
        cout << ans << endl;
    return 0;
}