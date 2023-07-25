#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    x[0] = 0;
    y[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int p, x1, y1;
        cin >> p >> x1 >> y1;
        x[i] = x[p - 1] + x1;
        y[i] = y[p - 1] + y1;
    }
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        s.insert({x[i], y[i]});
    }
    cout << s.size();
    return 0;
}