#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'T')
            cout << s[i];
        else if (s[i] == '+')
            cout << " tighten ";
        else if (s[i] == '-')
            cout << " loosen ";
        else if (s[i] >= '0' && s[i] <= '9')
        {
            while (s[i] >= '0' && s[i] <= '9')
            {
                cout << s[i];
                i++;
                if (s[i] < '0' || s[i] > '9')
                {
                    cout << endl;
                    cout << s[i];
                    break;
                }
            }
        }
    }
}