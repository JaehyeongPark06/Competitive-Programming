#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, n;
    cin >> c;
    pair<int, int> cas[c];
    int mxC = 0, mxN = 0; // setting max to 0 as fish product always > 0
    for (int i = 0; i < c; i++)
    {
        cin >> cas[i].first >> cas[i].second;
        mxC = max(mxC, cas[i].first * cas[i].second);
    }
    cin >> n;
    pair<int, int> nat[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nat[i].first >> nat[i].second;
        mxN = max(mxN, nat[i].first * nat[i].second);
    }
    if (mxC > mxN)
        cout << "Casper" << endl;
    else if (mxC < mxN)
        cout << "Natalie" << endl;
    else
        cout << "Tie" << endl;
    return 0;
}