#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int x1, y1, x2, y2, t;
    cin >> x1 >> y1 >> x2 >> y2 >> t;
    int moves = abs(x1 - x2) + abs(y1 - y2), left = t - moves;
    if (left > 0 && left % 2 == 0)
        cout << "Y" << endl;
    else if (left == 0)
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    return 0;
}