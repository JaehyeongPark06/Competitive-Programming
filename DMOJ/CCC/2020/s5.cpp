#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    vector<double> dp(N, 0.0);
    double C = 0.0;
    map<int, int> last;
    last[B[N - 1]] = N - 1;

    if (B[N - 1] == B[0])
    {
        dp[N - 1] = 1;
        C += 1;
        cout << fixed;
        cout.precision(8);
        cout << C << endl;
    }
    else
    {
        for (int i = N - 2; i >= 0; i--)
        {
            if (B[i] == B[0])
            {
                dp[i] = 1;
            }
            else if (last.find(B[i]) != last.end())
            {
                dp[i] = dp[last[B[i]]];
            }
            else
            {
                dp[i] = (1 + C) / (N - i);
            }
            C += dp[i];
            if (last.find(B[i]) == last.end())
            {
                last[B[i]] = i;
            }
        }
        cout << fixed << setprecision(8);
        cout << C / N << endl;
    }
    return 0;
}