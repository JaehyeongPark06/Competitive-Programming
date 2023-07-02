#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int a;
    cin >> a;
    for (int x = 0; x < a; x++)
    {
        int b;
        cin >> b;
        for (int y = 0; y < b; y++)
        {
            int c = b + y;
            int d = b - y;
            bool primec = true;
            bool primed = true;

            for (int z = 2; z <= sqrt(c); z++)
            {
                if (c % z == 0)
                {
                    primec = false;
                    break;
                }
            }
            if (primec)
            {
                for (int z = 2; z <= sqrt(d); z++)
                {
                    if (d % z == 0)
                    {
                        primed = false;
                        break;
                    }
                }
            }
            if (primed && primec)
            {
                cout << c << " " << d << endl;
                break;
            }
        }
    }
    return 0;
}