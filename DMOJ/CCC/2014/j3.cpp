#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n;
    cin >> n;
    int ant = 100, dav = 100;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            dav -= a;
        }
        else if (b > a)
        {
            ant -= b;
        }
    }
    cout << ant << endl
         << dav << endl;
}