#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int bt, np, yp, total;
    cin >> bt >> np >> yp >> total;

    int count = 0;
    for (int i = 0; i * bt <= total; i++)
    {
        for (int j = 0; i * bt + j * np <= total; j++)
        {
            for (int k = 0; k * yp + j * np + i * bt <= total; k++)
            {
                if (i + j + k != 0)
                {
                    cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel" << endl;
                    count++;
                }
            }
        }
    }
    cout << "Number of ways to catch fish: " << count << endl;
    return 0;
}
