#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l = 1, r = 2000000000;
    while (l < r)
    {
        long long m = (l + r) / 2;
        string input;
        cout << m << endl;
        cin >> input;
        if (input == "OK")
        {
            return 0;
        }
        if (input == "SINKS")
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << l << endl;
    return 0;
}