#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int mx = 1, start = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            bool flag = false;
            for (int k = 0; k < (j - i + 1) / 2; k++)
            {
                if (s[i + k] != s[j - k])
                    flag = true;
            }
            if (!flag && (j - i + 1) > mx)
            {
                start = i;
                mx = j - i + 1;
            }
        }
    }
    cout << mx << endl;
    return 0;
}
