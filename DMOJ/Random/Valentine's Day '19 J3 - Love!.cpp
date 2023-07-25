#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    ll l = 0, o = 0, v = 0, e = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'l')
        {
            l++;
        }
        else if (s[i] == 'o')
        {
            o += l;
        }
        else if (s[i] == 'v')
        {
            v += o;
        }
        else if (s[i] == 'e')
        {
            e += v;
        }
    }
    cout << e << endl;
    return 0;
}