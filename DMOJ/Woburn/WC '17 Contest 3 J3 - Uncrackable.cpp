#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool length(string b)
{
    return b.length() >= 8 && b.length() <= 12;
}

bool valid(string s)
{
    int lo = 0, up = 0, dig = 0;
    for (char c : s)
    {
        if (!isupper(c) && !islower(c) && !isdigit(c))
            return false;
        else if (isupper(c))
            up++;
        else if (islower(c))
            lo++;
        else if (isdigit(c))
            dig++;
    }
    return lo >= 3 && up >= 2 && dig >= 1 && length(s);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    cout << (valid(a) ? "Valid" : "Invalid") << endl;
    return 0;
}