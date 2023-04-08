#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pii pair<int, int>
#define f first
#define s second
#define vi vector<int>
#define pb push_back
#define eb emplace_back

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}