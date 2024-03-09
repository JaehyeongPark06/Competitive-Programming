#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
        cin >> v[i];
    set<int> s(v.begin(), v.end());
    auto it = s.end();
    advance(it, -3);
    cout << *it << " " << count(v.begin(), v.end(), *it) << endl;
    return 0;
}