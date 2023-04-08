#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v = 0, h = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'V')
            v++;
        else
            h++;
    }
    if (v % 2 == 0 && h % 2 == 0)
    {
        cout << 1 << " " << 2 << endl;
        cout << 3 << " " << 4 << endl;
        return 0;
    }
    else if (v % 2 == 0 && h % 2 != 0)
    {
        cout << 3 << " " << 4 << endl;
        cout << 1 << " " << 2 << endl;
        return 0;
    }
    else if (v % 2 != 0 && h % 2 == 0)
    {
        cout << 2 << " " << 1 << endl;
        cout << 4 << " " << 3 << endl;
    }
    else
    {
        cout << 4 << " " << 3 << endl;
        cout << 2 << " " << 1 << endl;
        return 0;
    }
    cout << endl;
    return 0;
}