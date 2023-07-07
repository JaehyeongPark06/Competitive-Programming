#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p, c;
    cin >> p >> c;
    int ans = 0;
    if (p > c)
        ans += 500;
    ans += p * 50;
    ans -= c * 10;
    cout << ans << endl;
    return 0;
}