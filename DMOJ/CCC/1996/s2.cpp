#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void del(char c, string &tmp)
{
    int len = tmp.length() - 1;
    tmp[len] -= c - '0';
    if (tmp[len] < '0')
    {
        tmp[len] += 10;
        for (int i = len - 1; i >= 0; i--)
        {
            tmp[i] -= 1;
            if (tmp[i] < '0')
                tmp[i] += 10;
            else
                break;
        }
    }
    if (tmp[0] == '0')
    {
        reverse(tmp.begin(), tmp.end());
        tmp.pop_back();
        reverse(tmp.begin(), tmp.end());
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    string a, b;
    while (n--)
    {
        cin >> a;
        b = a;
        while (a.length() > 2)
        {
            cout << a << endl;
            char last = a.back();
            a.pop_back();
            del(last, a);
        }
        cout << a << endl;
        cout << "The number " << b << " is" << (a[0] == a[1] ? " " : " not ") << "divisible by 11." << endl;
        if (n)
            cout << endl;
    }
    return 0;
}