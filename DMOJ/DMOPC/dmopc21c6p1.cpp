#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int d;
    string s;
    cin >> d >> s;
    for (int i = 1; i <= d; i++)
    {
        if (s[i] > s[i - 1])
        {
            swap(s[i], s[i - 1]);
            break;
        }
    }
    cout << s << endl;
    return 0;
}