#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int u = 0, l = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u > l)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
}