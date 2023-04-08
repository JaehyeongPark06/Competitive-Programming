#include <bits/stdc++.h>
using namespace std;

bool all_chars_same(string testStr)
{
    char letter = testStr[0];

    for (int i = 1; i < testStr.length(); i++)
    {
        if (testStr[i] != letter)
            return false;
    }

    return true;
}

int main()
{
    int N;
    int ans = 0;
    string s;
    cin >> N >> s;
    if (all_chars_same(s))
    {
        cout << N - 1 << endl;
        return 0;
    }
    for (int i = 0; i < N; i++)
    {
        if (s[i - 1] == s[i])
        {
            ans++;
        }
        else
        {
            continue;
        }
    }
    cout << ans << endl;
}