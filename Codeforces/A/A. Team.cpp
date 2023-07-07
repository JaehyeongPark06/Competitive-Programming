#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    ll a, b, c;
    ll ans = 0;
    scanf("%lld", &n);
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a + b + c >= 2)
            ans++;
    }
    printf("%lld", ans);
}