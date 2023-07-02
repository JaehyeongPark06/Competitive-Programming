#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a < 2 || (a == 2 && b < 18))
    {
        cout << "Before" << endl;
    }
    else if (a == 2 && b == 18)
    {
        cout << "Special" << endl;
    }
    else
    {
        cout << "After" << endl;
    }

    return 0;
}