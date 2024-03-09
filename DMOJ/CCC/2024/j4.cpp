#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
            {
                cout << a[i] << " " << b[i] << endl;
                cout << "-" << endl;
                return 0;
            }
        }
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        string ab = "";
        for (int i = 0; i < a.size(); i++)
            if (a[i] != c)
                ab += a[i];
        pair<char, char> no = {0, 0};
        bool ok = true;
        for (int i = 0; i < ab.size(); i++)
        {
            if (ab[i] != b[i])
            {
                if (no.first == 0)
                {
                    no.first = ab[i];
                    no.second = b[i];
                }
                else
                {
                    if (no.first != ab[i])
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if (ok)
        {
            cout << no.first << " " << no.second << endl;
            cout << c << endl;
            return 0;
        }
    }
}