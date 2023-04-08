#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a[a.length() - 2] != '1' && a[a.length() - 1] == '7' && b[b.length() - 2] == '1' && b[b.length() - 1] == '1')
        {
            cout << "YES" << endl;
        }
        else if (a[a.length() - 2] == '1' && a[a.length() - 1] == '1' && b[b.length() - 2] != '1' && b[b.length() - 1] == '7')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}