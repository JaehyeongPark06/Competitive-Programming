#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int hi, lo;
    if (n % 2 == 0)
    {
        hi = n / 2;
        lo = hi - 1;
    }
    else
    {
        lo = n / 2;
        hi = lo + 1;
    }
    while (hi < n)
    {
        cout << v[lo] << " " << v[hi] << " ";
        lo--;
        hi++;
    }
    if (n % 2 == 1)
        cout << v[0];
    return 0;
}