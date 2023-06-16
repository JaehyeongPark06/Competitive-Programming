#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mode(int base, int exponent, int modulus)
{
    int res = 1;
    base = base % modulus;

    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            res = (res * base) % modulus;
        }
        exponent = exponent / 2;
        base = (base * base) % modulus;
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    cout << mode(10, N, 7) << endl;
    return 0;
}