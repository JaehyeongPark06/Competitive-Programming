#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 1; i <= s.length(); i++)
        {
            if (s[i] == s[i - 1])
                count++;
            else
            {
                cout << count + 1 << " " << s[i - 1] << " ";
                count = 0;
            }
        }
        cout << endl;
    }
    return 0;
}