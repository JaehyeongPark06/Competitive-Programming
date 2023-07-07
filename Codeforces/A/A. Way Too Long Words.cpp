#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    scanf("%lld", &n);
    while (n > 0)
    {
        n--;
        string s;
        cin >> s;
        ll ls = s.length();
        if (ls > 10)
            cout << s[0] << ls - 2 << s[ls - 1] << endl;
        else
            cout << s << endl;
    }
    return 0;
}