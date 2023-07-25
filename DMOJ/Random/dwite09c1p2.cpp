#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    string s;
    for (int i = 0; i < 5; i++)
    {
        cin >> s;
        sort(s.begin(), s.end());
        do
        {
            cout << s << '\n';
        } while (next_permutation(s.begin(), s.end()));
    }
}