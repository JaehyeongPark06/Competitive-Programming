#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int opponents_ammo = 0, my_ammo = 0, my_score = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            opponents_ammo++;
            if (my_ammo > 0)
            {
                my_ammo--;
                my_score++;
            }
            else
            {
                my_ammo++;
            }
        }
        else if (s[i] == 'B')
        {
            my_ammo++;
        }
        else if (s[i] == 'F')
        {
            if (opponents_ammo > 0)
                opponents_ammo--;
            else
            {
                my_ammo--;
                my_score++;
            }
        }
    }
    cout << my_score << endl;
    return 0;
}