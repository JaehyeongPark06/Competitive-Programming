#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t, c;
    cin >> t >> c;
    vector<int> v(c);
    for (int i = 0; i < c; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < c; i++)
    {
        if (t - v[i] >= 0)
        {
            t -= v[i];
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}