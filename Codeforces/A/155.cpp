#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0, mn = 10001, mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            mn = v[i];
            mx = v[i];
        }
        else
        {
            if (v[i] > mx)
            {
                ans++;
                mx = v[i];
            }
            else if (v[i] < mn)
            {
                ans++;
                mn = v[i];
            }
        }
    }

    cout << ans << endl;

    return 0;
}