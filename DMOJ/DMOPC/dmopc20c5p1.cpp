#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int len = min(s.length(), t.length()), match = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == t[i])
            match++;
        else
            break;
    }
    cout << s.length() + t.length() - 2 * match << endl;
    return 0;
}