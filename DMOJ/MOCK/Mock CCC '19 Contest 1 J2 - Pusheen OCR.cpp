#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    string s, p = "pusheen";
    cin >> s;
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (s[i] != p[i])
            count++;
    }
    cout << count << endl;
    return 0;
}