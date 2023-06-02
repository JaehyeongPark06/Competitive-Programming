#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back
#define eb emplace_back

int N;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    vector<int> height(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> height[i];
    }
    vector<int> mini(N + 1);
    mini[2] = abs(height[2] - height[1]);
    for (int i = 3; i <= N; i++)
    {
        mini[i] = min(mini[i - 1] + abs(height[i] - height[i - 1]), mini[i - 2] + abs(height[i] - height[i - 2]));
    }
    cout << mini[N];
    return 0;
}