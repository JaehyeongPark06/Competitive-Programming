#include <bits/stdc++.h>
using namespace std;

void solve(int x)
{
    int count = 0;
    if (x % 2 == 0)
        count = x / 2 - 1;
    else
        count = x / 2;
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}