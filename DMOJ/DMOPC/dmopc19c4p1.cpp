#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stack<char> st;
        bool valid = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push('(');
            }
            else if (s[i] == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    valid = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty())
        {
            valid = false;
        }
        if (valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}