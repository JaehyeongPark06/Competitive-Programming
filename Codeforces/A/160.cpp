#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a[105];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0, total = 0;
    for (int i = 0; i < n; i++)
        total += a[i];
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
        ans += a[i];
        if (ans > total / 2)
        {
            cout << n - i << endl;
            return 0;
        }
    }
    return 0;
}