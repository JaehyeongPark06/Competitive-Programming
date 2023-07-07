#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

string pattern;
int n, k;

void solve(int rem, char next)
{
    pattern += next;
    if (pattern.length() == n)
    {
        cout << pattern << '\n';
    }
    if (rem > 0)
    {
        string temp = pattern;
        solve(rem - 1, '1');
        pattern = temp;
    }
    if (n - pattern.length() > rem)
    {
        string temp = pattern;
        solve(rem, '0');
        pattern = temp;
    }
}

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        cin >> n >> k;
        cout << "The bit patterns are" << '\n';
        if (k > 0)
        {
            pattern = "";
            solve(k - 1, '1');
        }
        if (n > k)
        {
            pattern = "";

            solve(k, '0');
        }
        if (i < tc - 1)
        {
            cout << '\n';
        }
    }
    return 0;
}