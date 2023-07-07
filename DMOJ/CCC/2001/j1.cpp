#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int h;
    cin >> h;
    int spaces = 2 * h - 2, stars = 1;
    if (h % 2 == 0)
    {
        for (int i = 0; i < h; i++)
        {
            if (i < h / 2)
            {
                string s1(2 * i + 1, '*');
                string s2(2 * (h - 2 * i) - 2, ' ');
                cout << s1 << s2 << s1 << endl;
            }
            else if (i > h / 2)
            {
                string s1(2 * (h - i) + 1, '*');
                string s2(2 * (h - 2 * (h - i)) - 2, ' ');
                cout << s1 << s2 << s1 << endl;
            }
            else
            {
                string s(2 * h, '*');
                cout << s << endl;
            }
        }
    }
    else
    {
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= stars; j++)
            {
                cout << "*";
            }
            for (int j = 1; j <= spaces; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= stars; j++)
            {
                cout << "*";
            }
            if (i <= h / 2)
            {
                spaces -= 4;
                stars += 2;
            }
            else
            {
                spaces += 4;
                stars -= 2;
            }
            cout << endl;
        }
    }
    cout << endl;
}