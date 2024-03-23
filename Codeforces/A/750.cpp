#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, time = 240, ans = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if (time - 5 * i < k)
        {
            cout << ans << endl;
            return 0;
        }
        else
        {
            time -= 5 * i;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}