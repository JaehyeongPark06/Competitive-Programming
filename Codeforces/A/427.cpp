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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int c = 0, h = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
            h += v[i];
        else if (v[i] == -1)
        {
            if (h > 0)
            {
                h--;
            }
            else
            {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}