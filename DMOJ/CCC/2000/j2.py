#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    string lo, hi;
    cin >> lo >> hi;
    int count = 0;
    for (int x = stoi(lo); x <= stoi(hi); x++)
    {
        bool skip = false;
        string number = to_string(x);
        string rotated = "";

        for (int y = 0; y < number.length(); y++)
        {
            if (number[y] == '6')
            {
                rotated += '9';
            }
            else if (number[y] == '9')
            {
                rotated += '6';
            }
            else if (number[y] == '8')
            {
                rotated += '8';
            }
            else if (number[y] == '1')
            {
                rotated += '1';
            }
            else if (number[y] == '0')
            {
                rotated += '0';
            }
            else
            {
                skip = true;
                break;
            }
        }
        if (number == string(rotated.rbegin(), rotated.rend()) && !skip)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}