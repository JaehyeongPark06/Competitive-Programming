#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] == b[j])
                ans++;
            if (a[j] == b[i])
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}