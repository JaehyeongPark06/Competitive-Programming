#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cu = 0, cd = 0;
    double s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (round(s) > s)
        {
            cu++;
        }
        else
        {
            cd++;
        }
    }
    cout << cu << endl;
    cout << cd << endl;
    return 0;
}