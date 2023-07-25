#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x % 5 == 0)
    {
        cout << x / 5 << endl;
        return 0;
    }
    if (x % 5 == 4)
    {
        cout << x / 5 + 1 << endl;
        return 0;
    }
    if (x % 5 == 3)
    {
        cout << x / 5 + 1 << endl;
        return 0;
    }
    if (x % 5 == 2)
    {
        cout << x / 5 + 1 << endl;
        return 0;
    }
    if (x % 5 == 1)
    {
        cout << x / 5 + 1 << endl;
        return 0;
    }
    return 0;
}