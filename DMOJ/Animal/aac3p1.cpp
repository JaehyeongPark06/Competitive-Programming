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

const int MM = 1e9;
int a, b, c, d;

int main()
{
    cin >> a >> b >> c >> d;
    if (a < b && c < d)
        cout << "Go to the department store" << endl;
    else if (a >= b && c < d)
        cout << "Go to the pharmacy" << endl;
    else if (a < b && c >= d)
        cout << "Go to the grocery store" << endl;
    else if (a >= b && c >= d)
        cout << "Stay home" << endl;
    return 0;
}