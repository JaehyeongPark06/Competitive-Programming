#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

const int MXM = 10e5 + 1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cur = 0, mx = 0;
    cin >> n;
    int a[MXM];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cur += a[i];
            if (cur > mx)
                mx = cur;
        }
        else if (a[i] % 2 == 1)
        {
            cur = 0;
        }
    }
    cout << mx << endl;
    return 0;
}
