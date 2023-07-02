#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

const int MXM = 1e5 + 2;

int n, a, b, p[MXM];
bool np[MXM];

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    // Sieve of Eratosthenes
    for (int i = 2; i < MXM; i++)
    {
        p[i] = p[i - 1] + !np[i] * i;
        if (!np[i])
            for (int j = i + i; j < MXM; j += i)
                np[j] = 1;
    }
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << (p[b] - p[a - 1]) << endl;
    }
}