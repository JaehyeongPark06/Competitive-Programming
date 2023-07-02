#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int a3, a2, a1, b3, b2, b1;
    cin >> a3 >> a2 >> a1 >> b3 >> b2 >> b1;
    if (a3 * 3 + a2 * 2 + a1 > b3 * 3 + b2 * 2 + b1)
        cout << 'A' << endl;
    else if (a3 * 3 + a2 * 2 + a1 < b3 * 3 + b2 * 2 + b1)
        cout << 'B' << endl;
    else
        cout << 'T' << endl;
    return 0;
}