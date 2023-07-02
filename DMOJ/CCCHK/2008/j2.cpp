#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve(string n)
{
    string num = n;

    while (num.length() > 1)
    {
        int sum = 0;
        for (char dig : num)
        {
            sum += dig - '0';
        }
        num = to_string(sum);
    }

    return stoi(num);
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}