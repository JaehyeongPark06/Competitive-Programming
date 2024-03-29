#include <bits/stdc++.h>
using namespace std;
const int MN = 1e4 + 5;
int N;
int h[MN], w[MN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N + 1; i++)
        cin >> h[i];
    for (int i = 1; i <= N; i++)
        cin >> w[i];
    double area = 0;
    for (int i = 1; i <= N; i++)
    {
        area += (h[i] + h[i + 1]) / 2.0 * w[i];
    }
    cout << fixed << setprecision(7) << area << '\n';
    return 0;
}