#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int a, b;
    cin >> a >> b;

    int g = gcd(a, b);
    a /= g;
    b /= g;

    if (a % b)
    {
        if (a / b)
        {
            cout << a / b << ' ';
        }
        cout << a % b << '/' << b << endl;
    }
    else
    {
        cout << a / b << endl;
    }

    return 0;
}
