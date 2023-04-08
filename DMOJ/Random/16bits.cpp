#include <bits/stdc++.h>

using namespace std;

long long n;

int main()
{
    cin >> n;
    while (n--)
    {
        long long a, b, p;
        cin >> a >> b >> p;
        if (a * b == p)
            cout << "POSSIBLE DOUBLE SIGMA" << endl;
        else
            cout << "16 BIT S/W ONLY" << endl;
    }
    return 0;
}