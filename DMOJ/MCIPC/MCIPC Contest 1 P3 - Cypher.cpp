#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

string solve(int length, string scrambled, vector<int> order)
{
    string original(length, ' ');
    for (int i = 0; i < length; i++)
    {
        original[order[i] - 1] = scrambled[i * 2];
    }
    return original;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << solve(n, s, v) << endl;
    return 0;
}