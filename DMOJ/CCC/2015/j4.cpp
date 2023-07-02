#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n;
    cin >> n;
    int t = 0;
    int frds[101];
    memset(frds, 0, sizeof(frds));
    for (int i = 0; i < n; i++)
    {
        string tx;
        cin >> tx;
        int a;
        cin >> a;
        if (tx == "R")
        {
            frds[a] -= t;
            t++;
        }
        else if (tx == "S")
        {
            frds[a] += t;
            t++;
        }
        else if (tx == "W")
        {
            t--;
            t += a;
        }
    }
    for (int i = 0; i < 101; i++)
    {
        if (frds[i] > 0)
        {
            cout << i << " " << frds[i] << endl;
        }
        else if (frds[i] < 0)
        {
            cout << i << " -1" << endl;
        }
    }

    return 0;
}
