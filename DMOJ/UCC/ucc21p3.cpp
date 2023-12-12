#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, x, y, l, r, t;
    ll ans = 0;
    cin >> n >> x >> y >> t;
    while (t--)
    {
        cin >> l >> r;
        l = max(l, x);
        r = min(r, y);
        ans += max(0, r - l + 1);
    }
    cout << ans << endl;
}
