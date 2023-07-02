#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h = 12, m = 0, c = 0;

    if (n > 720)
    {
        c += (n / 720) * 31;
        n = n % 720;
    }

    for (int i = 0; i < n; i++)
    {
        m += 1;
        if (m == 60)
        {
            if (h == 12)
            {
                h = 1;
            }
            else
            {
                h += 1;
            }
            m = 0;
        }

        string l = to_string(h);
        if (m < 10)
        {
            l += "0" + to_string(m);
        }
        else
        {
            l += to_string(m);
        }

        int ideal = -11;
        bool Special = true;
        for (int j = 0; j < l.size(); j++)
        {
            if (ideal == -11)
            {
                ideal = l[j] - l[j + 1];
            }
            else if (j != l.size() - 1)
            {
                if (ideal != l[j] - l[j + 1])
                {
                    Special = false;
                }
            }
        }
        if (Special)
        {
            c += 1;
            Special = false;
        }
    }
    cout << c << endl;
    return 0;
}