#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
        cin >> l[i];
    int ans = 0;
    for (int i = 0; i < n / 2; i++)
        if (l[i] != l[n - i - 1])
            ans += 2;
    cout << ans << endl;
    return 0;
}