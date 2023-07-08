#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i] << " as " << b[j] << endl;
        }
    }
    return 0;
}