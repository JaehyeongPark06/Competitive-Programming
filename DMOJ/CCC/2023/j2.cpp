#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    string s;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (s == "Poblano")
            ans += 1500;
        if (s == "Mirasol")
            ans += 6000;
        if (s == "Serrano")
            ans += 15500;
        if (s == "Cayenne")
            ans += 40000;
        if (s == "Thai")
            ans += 75000;
        if (s == "Habanero")
            ans += 125000;
    }
}