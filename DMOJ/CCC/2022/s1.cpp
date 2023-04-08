#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, sol = 0;
    cin >> t;
    while (t >= 0)
    {
        if (t % 5 == 0)
        {
            sol++;
        }
        t -= 4;
    }
    cout << sol << endl;
    return 0;
}