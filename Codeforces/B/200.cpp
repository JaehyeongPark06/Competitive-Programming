#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i] * 1.0 / 100;
    }
    cout << fixed << setprecision(12) << sum / n * 100 << endl;
    return 0;
}