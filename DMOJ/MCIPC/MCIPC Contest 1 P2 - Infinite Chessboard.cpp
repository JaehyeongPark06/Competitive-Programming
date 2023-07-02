#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

bool check(ll r, ll c)
{
    if (r % 2 == 1 && c % 2 == 1)
    {
        return true;
    }
    else if (r % 2 == 0 && c % 2 == 1)
    {
        return false;
    }
    else if (r % 2 == 0 && c % 2 == 0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    ll r, c;
    cin >> r >> c;
    if (check(r, c))
        cout << "white" << endl;
    else
        cout << "black" << endl;
}