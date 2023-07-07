#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n, t, p, mn = 1e9;
    cin >> n >> t;
    string s, mnName;
    while (n--)
    {
        cin >> s >> p;
        if (abs(t - p) < mn)
        {
            mn = abs(t - p);
            mnName = s;
        }
    }
    cout << mnName << endl;
    return 0;
}