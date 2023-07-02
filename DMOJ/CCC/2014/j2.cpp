#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n, acount = 0, bcount = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            acount++;
        else
            bcount++;
    }
    if (acount > bcount)
        cout << 'A' << endl;
    else if (acount == bcount)
        cout << "Tie" << endl;
    else
        cout << 'B' << endl;
    return 0;
}