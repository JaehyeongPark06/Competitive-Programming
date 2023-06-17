#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool dist = false;
    while (true)
    {
        n++;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    dist = true;
                    break;
                }
            }
            if (dist)
                break;
        }
        if (!dist)
            break;
        dist = false;
    }
    cout << n << endl;
}