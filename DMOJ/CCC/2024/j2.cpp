#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int d;
    cin >> d;
    bool ok = true;
    while (ok)
    {
        int y;
        cin >> y;
        if (d > y)
            d += y;
        else
        {
            cout << d << endl;
            ok = false;
        }
    }
    return 0;
}