#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int happy = 0, sad = 0;
    for (int i = 0; i < s.length() - 2; i++)
    {
        if (s[i] == ':' && s[i + 1] == '-')
        {
            if (s[i + 2] == ')')
            {
                happy++;
            }
            else if (s[i + 2] == '(')
            {
                sad++;
            }
        }
    }
    if (happy == 0 && sad == 0)
    {
        cout << "none" << endl;
    }
    else if (happy == sad && happy != 0 && sad != 0)
    {
        cout << "unsure" << endl;
    }
    else if (happy > sad)
    {
        cout << "happy" << endl;
    }
    else
    {
        cout << "sad" << endl;
    }
}