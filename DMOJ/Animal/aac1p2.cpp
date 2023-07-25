#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

vector<ll> speeds(1000005);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    ll D, X, P;
    cin >> N >> D >> K >> X;
    for (int i = 0; i < N; i++)
        cin >> speeds[i];
    cin >> P;
    sort(speeds.rbegin(), speeds.rend());
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (ans >= K)
            break;
        while (speeds[i] >= P && ans < K)
        {
            speeds[i] = speeds[i] * (100 - X) / 100;
            ans++;
        }
    }
    ll maxs = 0;
    for (int i = 0; i < N; i++)
        maxs = max(maxs, speeds[i]);
    if (P > maxs)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
