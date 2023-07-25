#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int opp = 0, me = 0, score = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            opp++;
            if (me > 0)
            {
                me--;
                score++;
            }
            else
            {
                me++;
            }
        }
        else if (s[i] == 'B')
        {
            me++;
        }
        else if (s[i] == 'F')
        {
            if (opp > 0)
                opp--;
            else
            {
                me--;
                score++;
            }
        }
    }
    cout << score << endl;
    return 0;
}