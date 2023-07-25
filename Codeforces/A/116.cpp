#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p;
    int n, ans = 0, curr = 0;
    cin >> n;
    while (n--)
    {
        cin >> p.first >> p.second;
        curr -= p.first;
        curr += p.second;
        ans = max(ans, curr);
    }
    cout << ans << endl;
    return 0;
}