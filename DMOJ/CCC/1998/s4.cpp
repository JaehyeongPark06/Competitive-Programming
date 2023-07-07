#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    string n;
    getline(cin, n);
    int N = stoi(n);
    for (int i = 0; i < N; i++)
    {
        string s;
        getline(cin, s);
        bool mul = true;
        while (mul)
        {
            mul = false;
            for (int j = 0; j < s.length(); j++)
            {

                if (s[j] == 'X')
                {
                    s[j] = 'x';
                    mul = true;
                    if (s[j - 2] == ')')
                    {

                        int bo = 1;

                        for (int k = j - 3; k >= 0; k--)
                        {

                            if (s[k] == ')')
                            {
                                bo++;
                            }

                            if (s[k] == '(')
                            {
                                bo--;
                                if (bo == 0)
                                {
                                    s.insert(k, "(");
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {

                        bool start = true;

                        for (int k = j - 2; k >= 0; k--)
                        {

                            if (s[k] == ' ')
                            {
                                s.insert(k + 1, "(");
                                start = false;
                                break;
                            }
                        }

                        if (start)
                        {
                            s.insert(0, "(");
                        }
                    }
                    if (s[j + 3] == '(')
                    {

                        int bo = 1;

                        for (int k = j + 4; k < s.length(); k++)
                        {

                            if (s[k] == '(')
                            {
                                bo++;
                            }

                            if (s[k] == ')')
                            {
                                bo--;
                                if (bo == 0)
                                {
                                    s.insert(k + 1, ")");
                                }
                            }
                        }
                    }
                    else
                    {
                        bool end = true;

                        for (int k = j + 3; k < s.length(); k++)
                        {
                            if (s[k] == ' ')
                            {
                                s.insert(k, ")");
                                end = false;
                                break;
                            }
                        }
                        if (end)
                        {
                            s += ")";
                        }
                    }
                    break;
                }
            }
        }
        bool add = true;
        while (add)
        {
            add = false;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == '+' || s[j] == '-')
                {
                    add = true;
                    if (s[j] == '+')
                        s[j] = '=';
                    else
                        s[j] = '_';
                    if (s[j - 2] == ')')
                    {
                        int bo = 1;
                        for (int k = j - 3; k >= 0; k--)
                        {
                            if (s[k] == ')')
                            {
                                bo++;
                            }
                            if (s[k] == '(')
                            {
                                bo--;
                                if (bo == 0)
                                {
                                    s.insert(k, "(");
                                }
                            }
                        }
                    }
                    else
                    {
                        bool start = true;
                        for (int k = j - 2; k >= 0; k--)
                        {
                            if (s[k] == ' ')
                            {
                                s.insert(k + 1, "(");
                                start = false;
                                break;
                            }
                        }
                        if (start)
                        {
                            s.insert(0, "(");
                        }
                    }
                    if (s[j + 3] == '(')
                    {
                        int bo = 1;
                        for (int k = j + 4; k < s.length(); k++)
                        {
                            if (s[k] == '(')
                            {
                                bo++;
                            }
                            if (s[k] == ')')
                            {
                                bo--;
                                if (bo == 0)
                                {
                                    s.insert(k + 1, ")");
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        bool end = true;
                        for (int k = j + 3; k < s.length(); k++)
                        {
                            if (s[k] == ' ')
                            {
                                s.insert(k, ")");
                                end = false;
                                break;
                            }
                        }
                        if (end)
                        {
                            s += ")";
                        }
                    }

                    break;
                }
            }
        }
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '=')
                s[j] = '+';
            else if (s[j] == '_')
                s[j] = '-';
            else if (s[j] == 'x')
                s[j] = 'X';
        }
        for (int j = 1; j < s.size() - 1; j++)
        {
            cout << s[j];
        }
        if (i != N - 1)
            cout << endl
                 << endl;
        else
            cout << endl;
    }
    return 0;
}