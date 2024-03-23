#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2)
        cout << 2 * k - 1 << endl;
    else
        cout << 2 * (k - (n + 1) / 2) << endl;
    return 0;
}