#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve(int t, int dif)
{
    int conv = t + dif;
    if (conv > 2400)
        conv -= 2400;
    else if (conv < 0)
        conv += 2400;
    if (conv % 100 >= 60)
        conv = ((conv / 100) * 100 + 100) + (conv % 100 - 60);
    return conv;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n, 0) << " in Ottawa" << endl;
    cout << solve(n, -300) << " in Victoria" << endl;
    cout << solve(n, -200) << " in Edmonton" << endl;
    cout << solve(n, -100) << " in Winnipeg" << endl;
    cout << solve(n, 0) << " in Toronto" << endl;
    cout << solve(n, 100) << " in Halifax" << endl;
    cout << solve(n, 130) << " in St. John's" << endl;
    return 0;
}