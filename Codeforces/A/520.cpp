#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            count[s[i] - 'a']++;
        else
            count[s[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}