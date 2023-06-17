#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long input, i;
    unsigned int ans;
    int T;
    cin >> T;
    while (T--)
    {
        cin >> input;
        if (input >= 34)
            cout << "0" << endl;
        else
        {
            ans = 1;
            for (i = 1; i <= input; i++)
            {
                ans = ans * i;
            }
            cout << ans << endl;
        }
    }
}