#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define eb emplace_back

const int MM = 1e9;
int tc;

int main()
{
    string s, t;
    cin >> s >> t;
    if (s == string(t.rbegin(), t.rend()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}