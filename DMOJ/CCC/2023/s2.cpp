#include <bits/stdc++.h>
using namespace std;

const int MXM = 5005;
int N, arr[MXM], ans[MXM];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    fill(ans, ans + MXM, 1e9 + 2);
    for (int i = 1; i <= N; i++)
    {
        int val = 0;
        for (int l = i, r = i; l >= 1 && r <= N; l--, r++)
        {
            val += abs(arr[l] - arr[r]);
            ans[r - l + 1] = min(ans[r - l + 1], val);
        }
        val = 0;
        for (int l = i, r = i + 1; l >= 1 && r <= N; l--, r++)
        {
            val += abs(arr[l] - arr[r]);
            ans[r - l + 1] = min(ans[r - l + 1], val);
        }
    }
    for (int i = 1; i <= N; i++)
    {
        cout << ans[i] << " ";
    }
}
