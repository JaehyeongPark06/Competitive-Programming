#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int b;
    cin >> b;
    int p = 5 * b - 400;
    cout << p << endl;
    if (p == 100)
        cout << 0 << endl;
    else if (p > 100)
        cout << -1 << endl;
    else
        cout << 1 << endl;
    return 0;
}