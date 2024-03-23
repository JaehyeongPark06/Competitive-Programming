#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, count = 0;
    cin >> t;

    while (t--)
    {
        vector<int> a;
        cin >> n;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0')
            {
                a.push_back((s[i] - '0') * pow(10, s.length() - i - 1));
                count++;
            }
            else
                continue;
        }
        cout << count << endl;
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
        count = 0;
    }
    return 0;
}