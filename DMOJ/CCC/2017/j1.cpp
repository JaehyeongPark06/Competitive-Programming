#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > 0)
    {
        if (y < 0)
            cout << 4 << endl;
        else
            cout << 1 << endl;
    }
    else
    {
        if (y < 0)
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}