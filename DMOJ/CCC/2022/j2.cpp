#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, P, F, ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> P >> F;
        if ((P * 5) - (F * 3) > 40)
            ans++;
    }
    if (ans == N)
        cout << N << '+' << endl;
    else
        cout << ans << endl;
}