#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    set<char> vowels = {'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};
    for (int i = 0; i < s.length(); i++)
    {
        if (vowels.find(s[i]) == vowels.end())
        {
            cout << "." << (char)tolower(s[i]);
        }
    }

    cout << endl;

    return 0;
}