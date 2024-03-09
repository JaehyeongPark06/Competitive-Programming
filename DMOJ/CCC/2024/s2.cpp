#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t >> n;
    string s;

    while (t--)
    {
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        bool ok = true;
        if (m[s[0]] != 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    if (m[s[i]] < 2)
                    {
                        ok = false;
                        break;
                    }
                }
                if (i % 2 == 1)
                {
                    if (m[s[i]] != 1)
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    if (m[s[i]] != 1)
                    {
                        ok = false;
                        break;
                    }
                }
                if (i % 2 == 1)
                {
                    if (m[s[i]] < 2)
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }

        cout << (ok ? "T" : "F") << endl;
    }
    return 0;
}