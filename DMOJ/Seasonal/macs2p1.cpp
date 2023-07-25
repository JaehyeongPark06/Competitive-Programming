#include <bits/stdc++.h>
using namespace std;

int main()
{
    char d;
    int l, r;
    cin >> d >> l >> r;
    int t;
    if (l == r)
        cout << d << endl;
    else if (l > r)
    {
        t = l - r;
        t %= 4;
        if (d == 'S')
        {
            if (t == 0)
                cout << 'S' << endl;
            else if (t == 1)
                cout << 'E' << endl;
            else if (t == 2)
                cout << 'N' << endl;
            else if (t == 3)
                cout << 'W' << endl;
        }
        else if (d == 'E')
        {
            if (t == 0)
                cout << 'E' << endl;
            else if (t == 1)
                cout << 'N' << endl;
            else if (t == 2)
                cout << 'W' << endl;
            else if (t == 3)
                cout << 'S' << endl;
        }
        else if (d == 'N')
        {
            if (t == 0)
                cout << 'N' << endl;
            else if (t == 1)
                cout << 'W' << endl;
            else if (t == 2)
                cout << 'S' << endl;
            else if (t == 3)
                cout << 'E' << endl;
        }
        else if (d == 'W')
        {
            if (t == 0)
                cout << 'W' << endl;
            else if (t == 1)
                cout << 'S' << endl;
            else if (t == 2)
                cout << 'E' << endl;
            else if (t == 3)
                cout << 'N' << endl;
        }
    }
    else
    {
        t = r - l;
        t %= 4;
        if (d == 'S')
        {
            if (t == 0)
                cout << 'S' << endl;
            else if (t == 1)
                cout << 'W' << endl;
            else if (t == 2)
                cout << 'N' << endl;
            else if (t == 3)
                cout << 'E' << endl;
        }
        else if (d == 'E')
        {
            if (t == 0)
                cout << 'E' << endl;
            else if (t == 1)
                cout << 'S' << endl;
            else if (t == 2)
                cout << 'W' << endl;
            else if (t == 3)
                cout << 'N' << endl;
        }
        else if (d == 'N')
        {
            if (t == 0)
                cout << 'N' << endl;
            else if (t == 1)
                cout << 'E' << endl;
            else if (t == 2)
                cout << 'S' << endl;
            else if (t == 3)
                cout << 'W' << endl;
        }
        else if (d == 'W')
        {
            if (t == 0)
                cout << 'W' << endl;
            else if (t == 1)
                cout << 'N' << endl;
            else if (t == 2)
                cout << 'E' << endl;
            else if (t == 3)
                cout << 'S' << endl;
        }
    }
}