#include <bits/stdc++.h>
using namespace std;

int solve(string a, string b, int &alice, int &bob)
{
    if (a == "rock" && b == "paper")
        bob++;
    else if (a == "rock" && b == "scissors")
        alice++;
    else if (a == "paper" && b == "rock")
        alice++;
    else if (a == "paper" && b == "scissors")
        bob++;
    else if (a == "scissors" && b == "rock")
        bob++;
    else if (a == "scissors" && b == "paper")
        alice++;
    else
        return 0;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int aWins = 0, bWins = 0;
    for (int i = 0; i < n; i++)
    {
        solve(a[i], b[i], aWins, bWins);
    }
    cout << aWins << " " << bWins << endl;
}