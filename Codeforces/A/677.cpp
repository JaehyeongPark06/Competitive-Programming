#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            ans += 2;
        }
        else
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}