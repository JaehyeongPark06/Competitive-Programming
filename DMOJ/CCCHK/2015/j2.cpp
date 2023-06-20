#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);
    vector<int> area;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i != k)
            {
                if (abs(x[i] - x[k]) > abs(y[i] - y[k]))
                {
                    area.push_back((x[i] - x[k]) * (x[i] - x[k]));
                }
                else
                {
                    area.push_back((y[i] - y[k]) * (y[i] - y[k]));
                }
            }
        }
    }

    sort(area.begin(), area.end());

    cout << area[0] << endl;

    return 0;
}