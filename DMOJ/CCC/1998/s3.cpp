#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        short ns = 0;
        short ew = 0;
        int face = 0;

        while (true)
        {
            int instruc;
            cin >> instruc;

            if (instruc == 1)
            {
                if (face == 0)
                {
                    short value;
                    cin >> value;
                    ns += value;
                }
                else if (face == 1)
                {
                    short value;
                    cin >> value;
                    ew += value;
                }
                else if (face == 2)
                {
                    short value;
                    cin >> value;
                    ns -= value;
                }
                else if (face == 3)
                {
                    short value;
                    cin >> value;
                    ew -= value;
                }
            }
            else if (instruc == 2)
            {
                face++;
                if (face == 4)
                    face = 0;
            }
            else if (instruc == 3)
            {
                face--;
                if (face == -1)
                    face = 3;
            }
            else
            {
                break;
            }
        }

        cout << "Distance is " << (abs(ns) + abs(ew)) << endl;

        while (abs(ns) + abs(ew) != 0)
        {
            if (face == 0 && ns < 0)
            {
                cout << 1 << endl;
                cout << -1 * ns << endl;
                ns = 0;
            }
            else if (face == 2 && ns > 0)
            {
                cout << 1 << endl;
                cout << ns << endl;
                ns = 0;
            }
            else if (face == 1 && ew < 0)
            {
                cout << 1 << endl;
                cout << -1 * ew << endl;
                ew = 0;
            }
            else if (face == 3 && ew > 0)
            {
                cout << 1 << endl;
                cout << ew << endl;
                ew = 0;
            }
            else
            {
                if (face == 0)
                {
                    if (ew > 0)
                    {
                        cout << 3 << endl;
                        face = 3;
                    }
                    else
                    {
                        cout << 2 << endl;
                        face = 1;
                    }
                }
                else if (face == 2)
                {
                    if (ew > 0)
                    {
                        cout << 2 << endl;
                        face = 3;
                    }
                    else
                    {
                        cout << 3 << endl;
                        face = 1;
                    }
                }
                else if (face == 1)
                {
                    if (ns > 0)
                    {
                        cout << 2 << endl;
                        face = 2;
                    }
                    else
                    {
                        cout << 3 << endl;
                        face = 0;
                    }
                }
                else
                {
                    if (ns > 0)
                    {
                        cout << 3 << endl;
                        face = 2;
                    }
                    else
                    {
                        cout << 2 << endl;
                        face = 0;
                    }
                }
            }
        }
        if (i != tc - 1)
        {
            cout << endl;
        }
    }
    return 0;
}
