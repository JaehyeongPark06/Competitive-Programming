#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int x, m;
    cin >> x >> m;
    for (int i = 1; i < m; i++)
    {
        if ((x * i) % m == 1)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "No such integer exists." << endl;
    return 0;
}