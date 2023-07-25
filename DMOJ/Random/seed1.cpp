#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> m = {
        {'B', 0},
        {'F', 0},
        {'T', 0},
        {'L', 0},
        {'C', 0},
    };
    string s;
    cin >> s;
    for (char c : s)
    {
        m[c]++;
    }
    bool all = false;
    for (auto p : m)
    {
        if (p.second == 0)
        {
            cout << p.first << endl;
        }
    }
    all = m['B'] > 0 && m['F'] > 0 && m['T'] > 0 && m['L'] > 0 && m['C'] > 0;
    if (all)
    {
        cout << "NO MISSING PARTS" << endl;
    }
    return 0;
}