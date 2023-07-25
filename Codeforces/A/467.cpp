#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int, int> p[100];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i].second - p[i].first >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}