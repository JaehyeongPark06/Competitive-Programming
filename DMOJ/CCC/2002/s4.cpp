#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

const int MXM = 102;

int M, Q, a[MXM], dp[MXM], p[MXM];
string n[MXM];
bool split[MXM];

int main()
{
    cin >> M >> Q;
    for (int i = 1; i <= Q; i++)
    {
        cin >> n[i];
        cin >> a[i];
        dp[i] = dp[i - 1] + a[i];
        p[i] = i - 1;
        for (int j = max(1, i - M + 1); j < i; j++)
        {
            int slow = 0;
            for (int k = j; k <= i; k++)
                slow = max(slow, a[k]);

            if (dp[j - 1] + slow < dp[i])
            {
                dp[i] = dp[j - 1] + slow;
                p[i] = j - 1;
            }
        }
    }
    cout << "Total Time: " << dp[Q] << endl;
    for (int i = p[Q]; i; i = p[i])
    {
        split[i] = 1;
    }
    for (int i = 1; i <= Q; i++)
    {
        cout << n[i];
        if (split[i])
            cout << endl;
        else
            cout << " ";
    }
    return 0;
}