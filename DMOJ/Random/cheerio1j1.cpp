#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    string vowels = "aieou";
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (vowels.find(s[i]) != string::npos && vowels.find(s[i + 1]) != string::npos)
        {
            flag = false;
            break;
        }
        if (vowels.find(s[i]) == string::npos && vowels.find(s[i + 1]) == string::npos)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}