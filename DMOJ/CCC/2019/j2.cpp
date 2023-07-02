#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        pair<int, char> p;
        cin >> p.first >> p.second;
        for (int i = 0; i < p.first; i++)
            cout << p.second;
        cout << endl;
    }
    return 0;
}