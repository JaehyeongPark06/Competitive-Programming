#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int nq, count = 0, a, b, c;
    cin >> nq >> a >> b >> c;
    for (int i = nq; i > 0; i--)
    {
        switch (count % 3)
        {
        case 0:
            a++;
            if (a % 35 == 0)
                i += 30;
            break;
        case 1:
            b++;
            if (b % 100 == 0)
                i += 60;
            break;
        case 2:
            c++;
            if (c % 10 == 0)
                i += 9;
            break;
        }
        count++;
    }
    cout << "Martha plays " << count << " times before going broke." << endl;
    return 0;
}