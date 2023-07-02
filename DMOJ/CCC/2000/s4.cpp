#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int d;
    cin >> d;
    vector<int> cs;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        cs.push_back(c);
    }
    vector<int> mn(d + 1, 5281);
    mn[0] = 0;
    for (int i = 0; i <= d; i++)
    {
        for (int j = 0; j < cs.size(); j++)
        {
            if (i + cs[j] <= d)
            { // if it doesn't go past
                if (mn[i] + 1 < mn[i + cs[j]])
                {
                    mn[i + cs[j]] = mn[i] + 1;
                }
            }
        }
    }
    if (mn[d] < 5281)
    {
        cout << "Roberta wins in " << mn[d] << " strokes." << endl;
    }
    else
    {
        cout << "Roberta acknowledges defeat." << endl;
    }
    return 0;
}