#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int a[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '+')
        {
            a[j] = s[i] - '0';
            j++;
        }
    }
    sort(a, a + j);
    for (int i = 0; i < j; i++)
    {
        cout << a[i];
        if (i != j - 1)
        {
            cout << "+";
        }
    }
    return 0;
}